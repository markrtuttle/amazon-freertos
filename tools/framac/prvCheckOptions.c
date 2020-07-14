/* Standard includes. */
#include <stdint.h>
// #include <stdio.h>

/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

/* FreeRTOS+TCP includes. */
#include "FreeRTOS_IP.h"
#include "FreeRTOS_Sockets.h"
#include "FreeRTOS_IP_Private.h"
#include "FreeRTOS_UDP_IP.h"
#include "FreeRTOS_DHCP.h"
#include "NetworkInterface.h"
#include "NetworkBufferManagement.h"
#include "FreeRTOS_ARP.h"

#define tcpTCP_FLAG_SYN				( ( uint8_t ) 0x02U ) /* Synchronize sequence numbers */
#define ipPOINTER_CAST( TYPE, pointer  ) ( ( TYPE ) ( pointer ) )
#define ipSIZE_OF_IPv4_HEADER			20U
#define xIPHeaderSize( pxNetworkBuffer )	( ipSIZE_OF_IPv4_HEADER )

/*@
    predicate is_uint8(integer n) =
        0 <= n < 1 << 8;

    predicate is_uint32(integer n) =
        0 <= n <= UINT_MAX;
*/

/*@
	requires \valid(pucPtr + (0 .. uxTotalLength));
	assigns \nothing;
	ensures \result == 1 || \result <= uxTotalLength;
*/
static size_t prvSingleStepTCPHeaderOptions( const uint8_t * const pucPtr,
											 size_t uxTotalLength,
											 FreeRTOS_Socket_t * const pxSocket,
											 BaseType_t xHasSYNFlag );


/*@
    requires \valid(pxSocket) && \valid(pxNetworkBuffer);
    requires \valid(pxNetworkBuffer->pucEthernetBuffer);  

*/
static void prvCheckOptions( FreeRTOS_Socket_t *pxSocket, const NetworkBufferDescriptor_t *pxNetworkBuffer )
{
size_t uxTCPHeaderOffset = ipSIZE_OF_ETH_HEADER + xIPHeaderSize( pxNetworkBuffer );
const ProtocolHeaders_t *pxProtocolHeaders = ipPOINTER_CAST( ProtocolHeaders_t *,
	&( pxNetworkBuffer->pucEthernetBuffer[ uxTCPHeaderOffset ] ) );
const TCPHeader_t * pxTCPHeader;
const uint8_t *pucPtr;
BaseType_t xHasSYNFlag;
/* Offset in the network packet where the first option byte is stored. */
size_t uxOptionOffset = uxTCPHeaderOffset + ( sizeof( TCPHeader_t ) - sizeof( pxTCPHeader->ucOptdata ) );
size_t uxOptionsLength;
size_t uxResult;
uint8_t ucLength;

	pxTCPHeader = &( pxProtocolHeaders->xTCPHeader );


	/* A character pointer to iterate through the option data */
	pucPtr = pxTCPHeader->ucOptdata;
	if( pxTCPHeader->ucTCPOffset <= ( 5U << 4U ) )
	{
		/* Avoid integer underflow in computation of ucLength. */
		return;
	}
	ucLength = ( ( ( pxTCPHeader->ucTCPOffset >> 4U ) - 5U ) << 2U );
	uxOptionsLength = ( size_t ) ucLength;
	if( pxNetworkBuffer->xDataLength > uxOptionOffset )
	{
		/* Validate options size calculation. */
		if( ( pxNetworkBuffer->xDataLength > uxOptionOffset ) &&
			( uxOptionsLength <= ( pxNetworkBuffer->xDataLength - uxOptionOffset ) ) )
		{
			if( ( pxTCPHeader->ucTCPFlags & tcpTCP_FLAG_SYN ) != ( uint8_t ) 0U )
			{
				xHasSYNFlag = pdTRUE;
			}
			else
			{
				xHasSYNFlag = pdFALSE;
			}
			/* The length check is only necessary in case the option data are
			corrupted, we don't like to run into invalid memory and crash. */
			// assigns to pxSocket fields
            /*@
                loop invariant 0 <= uxOptionsLength <= ( size_t ) ucLength;
                loop assigns uxResult, uxOptionsLength, pucPtr;
                loop variant uxOptionsLength;
            */
			for( ;; )
			{
				if( uxOptionsLength == 0U )
				{
					/* coverity[break_stmt] : Break statement terminating the loop */
					break;
				}
				uxResult = prvSingleStepTCPHeaderOptions( pucPtr, uxOptionsLength, pxSocket, xHasSYNFlag );
				if( uxResult == 0UL )
				{
					break;
				}
				uxOptionsLength -= uxResult;
				pucPtr = &( pucPtr[ uxResult ] );
			}
		}
	}
}
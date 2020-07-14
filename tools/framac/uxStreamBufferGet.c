
#include <stddef.h>
#include <limits.h>

/* Standard includes. */
#include <stdint.h>
//#include <stdio.h>

/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

// /* FreeRTOS+TCP includes. */
// #include "FreeRTOS_UDP_IP.h"
// #include "FreeRTOS_IP.h"
// #include "FreeRTOS_Sockets.h"
// #include "FreeRTOS_IP_Private.h"

typedef struct xSTREAM_BUFFER {
	volatile size_t uxTail;		/* next item to read */
	volatile size_t uxMid;		/* iterator within the valid items */
	volatile size_t uxHead;		/* next position store a new item */
	volatile size_t uxFront;	/* iterator within the free space */
	size_t LENGTH;				/* const value: number of reserved elements */
	uint8_t ucArray[ sizeof( size_t ) ];
} StreamBuffer_t;

// want this to work:
/*
	requires \valid(((char*)dest)+(0..n-1)) && \valid(((char*)src)+(0..n-1));
	requires \separated(((char *)dest)+(0..n-1),((char *)src)+(0..n-1));
	assigns ((char*)dest)[0..n-1] \from ((char*)src)[0..n-1];
	ensures \forall size_t j; 0 <= j < n ==> *(char*)(dest + j) == *(char*)(src + j);
*/

/*@
	assigns \nothing;
*/
extern void *memcpy(void *restrict dest, const void *restrict src, size_t n);

/*@
    predicate is_uint8(integer n) =
        0 <= n < 1 << 8;

    predicate is_uint32(integer n) =
        0 <= n <= UINT_MAX;
*/

/*@
	assigns \nothing;
	ensures a <= b ==> \result == a;
	ensures a > b ==> \result == b;	
*/
static uint32_t FreeRTOS_min_uint32 (uint32_t a, uint32_t b) { return ( a <= b ) ? a : b; }

//     requires \forall size_t j; 0 <= j < sizeof( size_t ) ==> is_uint8(pxBuffer->ucArray[j]);

/*@
	requires \valid(pxBuffer);
	assigns \nothing;
*/
static size_t uxStreamBufferDistance( const StreamBuffer_t *pxBuffer, const size_t uxLower, const size_t uxUpper )
{
size_t uxCount;

	uxCount = pxBuffer->LENGTH + uxUpper - uxLower;
	if ( uxCount >= pxBuffer->LENGTH )
	{
		uxCount -= pxBuffer->LENGTH;
	}

	return uxCount;
}

/*@
	requires \valid(pxBuffer);
	assigns \nothing;
*/
static size_t uxStreamBufferGetSize( const StreamBuffer_t *pxBuffer )
{
	/* Returns the number of items which can be read from uxTail
	before reaching uxHead */
	size_t uxHead = pxBuffer->uxHead;
	size_t uxTail = pxBuffer->uxTail;

	return uxStreamBufferDistance( pxBuffer, uxTail, uxHead );
}

// TODO deal with memcpy stuff

/*@
	requires \valid(pxBuffer);
	requires \valid(pucData);
	requires \separated(pxBuffer, pucData);
	requires is_uint32(uxOffset);

	assigns *(pxBuffer->ucArray + (0 .. sizeof(size_t) - 1));
	assigns pxBuffer->uxTail;
	assigns *(pucData); // fix this

	ensures 0 <= \result <= UINT_MAX;

*/
size_t uxStreamBufferGet( StreamBuffer_t *pxBuffer, size_t uxOffset, uint8_t *pucData, size_t uxMaxCount, BaseType_t xPeek )
{
size_t uxSize, uxCount, uxFirst, uxNextTail;

	/* How much data is available? */
	uxSize = uxStreamBufferGetSize( pxBuffer );

	if( uxSize > uxOffset )
	{
		uxSize -= uxOffset;
	}
	else
	{
		uxSize = 0U;
	}

	/* Use the minimum of the wanted bytes and the available bytes. */
	uxCount = FreeRTOS_min_uint32( uxSize, uxMaxCount );

	if( uxCount > 0U )
	{
		uxNextTail = pxBuffer->uxTail;

		if( uxOffset != 0U )
		{
			uxNextTail += uxOffset;
			if( uxNextTail >= pxBuffer->LENGTH )
			{
				uxNextTail -= pxBuffer->LENGTH;
			}
		}

		if( pucData != NULL )
		{
			/* Calculate the number of bytes that can be read - which may be
			less than the number wanted if the data wraps around to the start of
			the buffer. */
			uxFirst = FreeRTOS_min_uint32( pxBuffer->LENGTH - uxNextTail, uxCount );

			/* Obtain the number of bytes it is possible to obtain in the first
			read. */
			( void ) memcpy( pucData, &( pxBuffer->ucArray[ uxNextTail ] ), uxFirst );

			/* If the total number of wanted bytes is greater than the number
			that could be read in the first read... */
			if( uxCount > uxFirst )
			{
				/*...then read the remaining bytes from the start of the buffer. */
				( void ) memcpy( &( pucData[ uxFirst ] ), pxBuffer->ucArray, uxCount - uxFirst );
			}
		}

		if( ( xPeek == pdFALSE ) && ( uxOffset == 0UL ) )
		{
			/* Move the tail pointer to effecively remove the data read from
			the buffer. */
			uxNextTail += uxCount;

			if( uxNextTail >= pxBuffer->LENGTH )
			{
				uxNextTail -= pxBuffer->LENGTH;
			}

			pxBuffer->uxTail = uxNextTail;
		}
	}

	return uxCount;
}

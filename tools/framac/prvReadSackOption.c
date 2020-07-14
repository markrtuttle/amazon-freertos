#include <stdint.h>
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

#define pdFALSE			( ( BaseType_t ) 0 )
#define pdTRUE			( ( BaseType_t ) 1 )
// #define configPRINTF( X )    printf X
// #define FreeRTOS_debug_printf( X )    configPRINTF( X )
// #define ipFALSE_BOOL		( 1 == 2 )
// #define FreeRTOS_flush_logging( )			do{} while( ipFALSE_BOOL )
// #define ipconfigIS_VALID_PROG_ADDRESS(x)		( ( x ) != NULL )
// #define ipconfigTCP_MAY_LOG_PORT(xPort)			( ( xPort ) != 23U )
// #define ipPOINTER_CAST( TYPE, pointer  ) ( ( TYPE ) ( pointer ) )
// #define listGET_END_MARKER( pxList )	( ( ListItem_t const * ) ( &( ( pxList )->xListEnd ) ) )
// #define listGET_NEXT( pxListItem )	( ( pxListItem )->pxNext )
// #define listGET_LIST_ITEM_OWNER( pxListItem )	( ( pxListItem )->pvOwner )


TickType_t MPU_xTaskGetTickCount( void )
{
TickType_t xReturn;
BaseType_t xRunningPrivileged = xPortRaisePrivilege();

	xReturn = xTaskGetTickCount();
	vPortResetPrivilege( xRunningPrivileged );
	return xReturn;
}

#define xTaskGetTickCount						MPU_xTaskGetTickCount


typedef struct xTCPTimerStruct
{
	uint32_t ulBorn;
} TCPTimer_t;

/*@
    predicate is_uint8(integer n) =
        0 <= n < 1 << 8;

    predicate is_uint32(integer n) =
        0 <= n <= UINT_MAX;
*/


/*@
    requires \valid(pxTimer);
*/
static uint32_t ulTimerGetAge( const TCPTimer_t *pxTimer )
{
	return ( ( xTaskGetTickCount() - ( ( TickType_t ) pxTimer->ulBorn ) ) * portTICK_PERIOD_MS );
}

/*@
    requires is_uint32(a);
    requires is_uint32(b);
*/
static BaseType_t xSequenceLessThan( uint32_t a, uint32_t b )
{
BaseType_t xResult;

    /* Test if a < b */
    if( ( ( b - ( a + 1UL ) ) & 0x80000000UL ) == 0UL )
    {
        xResult = pdTRUE;
    }
    else
    {
        xResult = pdFALSE;
    }
    return xResult;
}

/*-----------------------------------------------------------*/

/*@
    requires is_uint32(a);
    requires is_uint32(b);
*/
static BaseType_t xSequenceGreaterThan( uint32_t a, uint32_t b )
{
	BaseType_t xResult;

    /* Test if a > b */
    if( ( ( a - ( b + 1UL ) ) & 0x80000000UL ) == 0UL )
    {
        xResult = pdTRUE;
    }
    else
    {
        xResult = pdFALSE;
    }
    return xResult;
}

/*-----------------------------------------------------------*/

/*@
    requires \valid(apChr + (0 .. 3));
    requires \forall size_t j; 0 <= j <= 3 ==> is_uint8(apChr[j]);
    assigns \nothing;
*/
static uint32_t ulChar2u32 (const uint8_t *apChr)
{
    return  ( ( ( uint32_t )apChr[0] ) << 24) |
            ( ( ( uint32_t )apChr[1] ) << 16) |
            ( ( ( uint32_t )apChr[2] ) << 8) |
            ( ( ( uint32_t )apChr[3] ) );
}

/*-----------------------------------------------------------*/

// static uint32_t prvTCPWindowTxCheckAck( TCPWindow_t *pxWindow, uint32_t ulFirst, uint32_t ulLast )
// {
// uint32_t ulBytesConfirmed = 0U;
// uint32_t ulSequenceNumber = ulFirst, ulDataLength;
// const ListItem_t *pxIterator;
// const ListItem_t *pxEnd = ipPOINTER_CAST( const ListItem_t *, listGET_END_MARKER( &pxWindow->xTxSegments ) );
// BaseType_t xDoUnlink;
// TCPSegment_t *pxSegment;

//     pxIterator  = listGET_NEXT( pxEnd );
//     while( ( pxIterator != pxEnd ) && ( xSequenceLessThan( ulSequenceNumber, ulLast ) != 0 ) )
//     {
//         xDoUnlink = pdFALSE;
//         pxSegment = ipPOINTER_CAST( TCPSegment_t *, listGET_LIST_ITEM_OWNER( pxIterator ) );

//         /* Move to the next item because the current item might get
//         removed. */
//         pxIterator = ( const ListItem_t * ) listGET_NEXT( pxIterator );

//         /* Continue if this segment does not fall within the ACK'd range. */
//         if( xSequenceGreaterThan( ulSequenceNumber, pxSegment->ulSequenceNumber ) != pdFALSE )
//         {
//             continue;
//         }

//         /* Is it ready? */
//         if( ulSequenceNumber != pxSegment->ulSequenceNumber )
//         {
//             /* coverity[break_stmt] : Break statement terminating the loop */
//             break;
//         }

//         ulDataLength = ( uint32_t ) pxSegment->lDataLength;

//         if( pxSegment->u.bits.bAcked == pdFALSE_UNSIGNED )
//         {
//             if( xSequenceGreaterThan( pxSegment->ulSequenceNumber + ( uint32_t )ulDataLength, ulLast ) != pdFALSE )
//             {
//                 /* What happens?  Only part of this segment was accepted,
//                 probably due to WND limits

//                     AAAAAAA BBBBBBB << acked
//                     aaaaaaa aaaa    << sent */
//                 #if( ipconfigHAS_DEBUG_PRINTF != 0 )
//                 {
//                     uint32_t ulFirstSeq = pxSegment->ulSequenceNumber - pxWindow->tx.ulFirstSequenceNumber;
//                     FreeRTOS_debug_printf( ( "prvTCPWindowTxCheckAck[%u.%u]: %lu - %lu Partial sequence number %lu - %lu\n",
//                         pxWindow->usPeerPortNumber,
//                         pxWindow->usOurPortNumber,
//                         ulFirstSeq - pxWindow->tx.ulFirstSequenceNumber,
//                         ulLast - pxWindow->tx.ulFirstSequenceNumber,
//                         ulFirstSeq, ulFirstSeq + ulDataLength ) );
//                 }
//                 #endif	/* ipconfigHAS_DEBUG_PRINTF */
//                 break;
//             }

//             /* This segment is fully ACK'd, set the flag. */
//             pxSegment->u.bits.bAcked = pdTRUE;

//             /* Calculate the RTT only if the segment was sent-out for the
//             first time and if this is the last ACK'd segment in a range. */
//             if( ( pxSegment->u.bits.ucTransmitCount == 1U ) && ( ( pxSegment->ulSequenceNumber + ulDataLength ) == ulLast ) )
//             {
//                 int32_t mS = ( int32_t ) ulTimerGetAge( &( pxSegment->xTransmitTimer ) );

//                 if( pxWindow->lSRTT >= mS )
//                 {
//                     /* RTT becomes smaller: adapt slowly. */
//                     pxWindow->lSRTT = ( ( winSRTT_DECREMENT_NEW * mS ) + ( winSRTT_DECREMENT_CURRENT * pxWindow->lSRTT ) ) / ( winSRTT_DECREMENT_NEW + winSRTT_DECREMENT_CURRENT );
//                 }
//                 else
//                 {
//                     /* RTT becomes larger: adapt quicker */
//                     pxWindow->lSRTT = ( ( winSRTT_INCREMENT_NEW * mS ) + ( winSRTT_INCREMENT_CURRENT * pxWindow->lSRTT ) ) / ( winSRTT_INCREMENT_NEW + winSRTT_INCREMENT_CURRENT );
//                 }

//                 /* Cap to the minimum of 50ms. */
//                 if( pxWindow->lSRTT < winSRTT_CAP_mS )
//                 {
//                     pxWindow->lSRTT = winSRTT_CAP_mS;
//                 }
//             }

//             /* Unlink it from the 3 queues, but do not destroy it (yet). */
//             xDoUnlink = pdTRUE;
//         }

//         /* pxSegment->u.bits.bAcked is now true.  Is it located at the left
//         side of the transmission queue?  If so, it may be freed. */
//         if( ulSequenceNumber == pxWindow->tx.ulCurrentSequenceNumber )
//         {
//             if( ( xTCPWindowLoggingLevel >= 2 ) && ( ipconfigTCP_MAY_LOG_PORT( pxWindow->usOurPortNumber ) ) )
//             {
//                 FreeRTOS_debug_printf( ( "prvTCPWindowTxCheckAck: %lu - %lu Ready sequence number %lu\n",
//                     ulFirst - pxWindow->tx.ulFirstSequenceNumber,
//                     ulLast - pxWindow->tx.ulFirstSequenceNumber,
//                     pxSegment->ulSequenceNumber - pxWindow->tx.ulFirstSequenceNumber ) );
//             }

//             /* Increase the left-hand value of the transmission window. */
//             pxWindow->tx.ulCurrentSequenceNumber += ulDataLength;

//             /* This function will return the number of bytes that the tail
//             of txStream may be advanced. */
//             ulBytesConfirmed += ulDataLength;

//             /* All segments below tx.ulCurrentSequenceNumber may be freed. */
//             vTCPWindowFree( pxSegment );

//             /* No need to unlink it any more. */
//             xDoUnlink = pdFALSE;
//         }

//         if( ( xDoUnlink != pdFALSE ) && ( listLIST_ITEM_CONTAINER( &( pxSegment->xQueueItem ) ) != NULL ) )
//         {
//             /* Remove item from its queues. */
//             ( void ) uxListRemove( &pxSegment->xQueueItem );
//         }

//         ulSequenceNumber += ulDataLength;
//     }

//     return ulBytesConfirmed;
// }

// /*-----------------------------------------------------------*/

// static uint32_t prvTCPWindowFastRetransmit( TCPWindow_t *pxWindow, uint32_t ulFirst )
// {
// const ListItem_t * pxIterator;
// const ListItem_t * pxEnd;
// TCPSegment_t *pxSegment;
// uint32_t ulCount = 0UL;

//     /* A higher Tx block has been acknowledged.  Now iterate through the
//         xWaitQueue to find a possible condition for a FAST retransmission. */

//     pxEnd = ipPOINTER_CAST( const ListItem_t *, listGET_END_MARKER( &( pxWindow->xWaitQueue ) ) );

//     pxIterator  = listGET_NEXT( pxEnd );

//     while( pxIterator != pxEnd )
//     {
//         /* Get the owner, which is a TCP segment. */
//         pxSegment = ipPOINTER_CAST( TCPSegment_t *, listGET_LIST_ITEM_OWNER( pxIterator ) );

//         /* Hop to the next item before the current gets unlinked. */
//         pxIterator  = listGET_NEXT( pxIterator );

//         /* Fast retransmission:
//         When 3 packets with a higher sequence number have been acknowledged
//         by the peer, it is very unlikely a current packet will ever arrive.
//         It will be retransmitted far before the RTO. */
//         if( pxSegment->u.bits.bAcked == pdFALSE_UNSIGNED )
//         {
//             if( xSequenceLessThan( pxSegment->ulSequenceNumber, ulFirst ) != pdFALSE )
//             {
//                 pxSegment->u.bits.ucDupAckCount++;
//                 if( pxSegment->u.bits.ucDupAckCount == DUPLICATE_ACKS_BEFORE_FAST_RETRANSMIT )
//                 {
//                     pxSegment->u.bits.ucTransmitCount = ( uint8_t ) pdFALSE;

//                     /* Not clearing 'ucDupAckCount' yet as more SACK's might come in
//                     which might lead to a second fast rexmit. */
//                     if( ( xTCPWindowLoggingLevel >= 0 ) && ( ipconfigTCP_MAY_LOG_PORT( pxWindow->usOurPortNumber ) ) )
//                     {
//                         FreeRTOS_debug_printf( ( "prvTCPWindowFastRetransmit: Requeue sequence number %lu < %lu\n",
//                             pxSegment->ulSequenceNumber - pxWindow->tx.ulFirstSequenceNumber,
//                             ulFirst - pxWindow->tx.ulFirstSequenceNumber ) );
//                         FreeRTOS_flush_logging( );
//                     }

//                     /* Remove it from xWaitQueue. */
//                     ( void ) uxListRemove( &pxSegment->xQueueItem );
//                     /* Add this segment to the priority queue so it gets
//                     retransmitted immediately. */
//                     vListInsertFifo( &( pxWindow->xPriorityQueue ), &( pxSegment->xQueueItem ) );
//                     ulCount++;
//                 }
//             }
//         }
//     }

//     return ulCount;
// }
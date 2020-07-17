#include <stdint.h>
#include <stddef.h>
#include <limits.h>

#define dnsNAME_IS_OFFSET					( ( uint8_t ) 0xc0 )

/*@
    predicate is_size_t(size_t n) = 
        0 < n <= SIZE_MAX;
*/

/*@
    requires \valid(pucByte + (0 .. uxRemainingBytes - 1));
    requires is_size_t(uxRemainingBytes);
    requires is_size_t(uxDestLen);
    requires \valid(pcName + (0 .. uxDestLen - 1));
    assigns pcName[0 .. uxDestLen - 1];

    ensures uxRemainingBytes == ( size_t ) 0U ==> \result == 0U;
*/
static size_t prvReadNameField( const uint8_t *pucByte,
                                size_t uxRemainingBytes,
                                char *pcName,
                                size_t uxDestLen )
{
    size_t uxNameLen = 0U;
    size_t uxIndex = 0U;
    size_t uxSourceLen = uxRemainingBytes;

    /* uxCount gets the valus from pucByte and counts down to 0.
    No need to have a different type than that of pucByte */
    size_t uxCount;  


    /* Process the first/next sub-string. */
    uxCount = ( size_t ) pucByte[ uxIndex ];
    uxIndex++;
    if( ( uxIndex + uxCount ) > uxSourceLen )
    {
        uxIndex = 0U;
    }
    //      loop invariant 0 <= uxCount;
    /*@
        loop invariant 0 <= uxIndex <= uxSourceLen;
        loop assigns pcName[\at(uxNameLen, LoopEntry) .. uxDestLen - 1], uxNameLen, uxIndex, uxCount;
        loop variant uxCount;
    */               
    while( ( uxCount-- != 0U ) && ( uxIndex < uxSourceLen ) )
    {
        if( uxNameLen >= uxDestLen )
        {
            uxIndex = 0U;
            break;
            /* break out of inner loop here
            break out of outer loop at the test uxNameLen >= uxDestLen. */
        }
        pcName[ uxNameLen ] = ( char ) pucByte[ uxIndex ];
        uxNameLen++;
        uxIndex++;
    }


    return uxIndex;
}
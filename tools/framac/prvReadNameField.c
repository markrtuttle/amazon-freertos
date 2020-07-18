#include <stdint.h>
#include <stddef.h>

#define dnsNAME_IS_OFFSET					( ( uint8_t ) 0xc0 )

/*@
    predicate is_size_t(size_t n) =
        0 <= n <= SIZE_MAX;
*/

/*@
    requires \valid(pucByte + (0 .. uxRemainingBytes - 1));
    requires is_size_t(uxRemainingBytes);
    requires is_size_t(uxDestLen);
    requires \valid(pcName + (0 .. uxDestLen - 1));
    requires \separated(pcName, pucByte);
*/
static size_t prvReadNameField( const uint8_t * const pucByte,
                                size_t uxRemainingBytes,
                                char * const pcName,
                                size_t uxDestLen )
{
size_t uxNameLen = 0U;
size_t uxIndex = 0U;
size_t uxSourceLen = uxRemainingBytes;

uint8_t uxCount;
    if( uxSourceLen == ( size_t ) 0U )
    {
        uxIndex = 0U;
    }
    else
    {
        //@ assert uxSourceLen > 0;
        //@ assert uxIndex < uxSourceLen;
        //@ assert 0 <= uxIndex <= uxSourceLen;
        //@ assert \forall size_t j; 0 <= j < uxIndex ==> pucByte[j] != ( uint8_t )0x00U;

      //            loop invariant \forall size_t j; 0 <= j < uxIndex ==> pucByte[j] != ( uint8_t )0x00U;


        /*@
            loop invariant 0 <= uxIndex <= uxSourceLen;
            loop invariant 0 <= uxNameLen <= uxDestLen;
	    loop invariant \separated(pcName, pucByte);
            loop assigns pcName[0 .. uxDestLen], uxNameLen, uxIndex, uxCount, uxRemainingBytes, uxDestLen;
            loop variant uxSourceLen - uxIndex;
        */
        while( ( uxIndex < uxSourceLen ) && ( pucByte[ uxIndex ] != ( uint8_t )0x00U ) )
        {
            if( ( uxNameLen > 0U ) )
            {
                if( uxNameLen >= uxDestLen )
                {
                    uxIndex = 0U;
                    break;
                }
                pcName[ uxNameLen ] = '.';
                uxNameLen++;
            }
            uxCount = ( uint8_t ) pucByte[ uxIndex ];
	    //@ assert 0 <= uxCount < 256;
            uxIndex++;
            if( ( uxIndex + uxCount ) > uxSourceLen )
            {
                uxIndex = 0U;
                break;
            }
            /*@
                loop invariant 0 <= uxIndex <= uxSourceLen;
                loop invariant 0 <= uxNameLen <= uxDestLen;
   	        loop invariant \separated(pcName, pucByte);
                loop assigns pcName[0 .. uxDestLen], uxNameLen, uxIndex, uxCount, uxRemainingBytes, uxDestLen;
                loop variant uxCount;
            */
            while( ( uxCount-- != 0U ) && ( uxIndex < uxSourceLen ) )
            {
                if( uxNameLen >= uxDestLen )
                {
                    uxIndex = 0U;
                    break;
                }
                pcName[ uxNameLen ] = ( char ) pucByte[ uxIndex ];
                uxNameLen++;
                uxIndex++;
            }
        }

        if( uxIndex > 0U )
        {
            if( ( uxNameLen < uxDestLen ) && ( uxIndex < uxSourceLen ) && ( pucByte[ uxIndex ] == 0U ) )
            {
                pcName[ uxNameLen ] = '\0';
                uxIndex++;
            }
            else
            {
                uxIndex = 0U;
            }
        }
    }

    return uxIndex;
}

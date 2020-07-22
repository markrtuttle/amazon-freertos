#include <stdint.h>
#include <stddef.h>

#define dnsNAME_IS_OFFSET					( ( uint8_t ) 0xc0 )

/*@
    requires \valid(pucByte + (0 .. uxRemainingBytes - 1));
    requires \separated(pucByte, pcName);
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

    if( uxSourceLen == ( size_t ) 0U )
    {
        /* Return 0 value in case of error. */
        uxIndex = 0U;
    }
    /* Determine if the name is the fully coded name, or an offset to the name
    elsewhere in the message. */
    else if( ( pucByte[ uxIndex ] & dnsNAME_IS_OFFSET ) == dnsNAME_IS_OFFSET )
    {
        /* Jump over the two byte offset. */
        if( uxSourceLen > sizeof( uint16_t ) )
        {
            uxIndex += sizeof( uint16_t );
        }
        else
        {
            uxIndex = 0U;
        }
    }
    else
    {
        //@ assert uxIndex == 0;
        //@ assert uxSourceLen > 0;
        
        /* 'uxIndex' points to the full name. Walk over the string. */
        // loop variant uxSourceLen - uxIndex;
       /*@
            loop invariant 0 <= uxIndex <= uxSourceLen;
            loop invariant 0 <= uxNameLen <= uxDestLen;
            loop assigns pcName[0 .. uxDestLen - 1], uxNameLen, uxIndex, uxCount;
        */
        while( ( uxIndex < uxSourceLen ) && ( pucByte[ uxIndex ] != ( uint8_t )0x00U ) )
        {
            //@ assert uxSourceLen == \at(uxRemainingBytes, Pre);
            /* If this is not the first time through the loop, then add a
            separator in the output. */
            if( ( uxNameLen > 0U ) )
            {
                if( uxNameLen >= uxDestLen )
                {
                    uxIndex = 0U;
                    /* coverity[break_stmt] : Break statement terminating the loop */
                    break;
                }
                //@ assert uxNameLen < uxDestLen;
                pcName[ uxNameLen ] = '.';
                uxNameLen++;
            }

            /* Process the first/next sub-string. */
            uxCount = ( size_t ) pucByte[ uxIndex ];
            uxIndex++;
            if( ( uxIndex + uxCount ) > uxSourceLen )
            {
                uxIndex = 0U;
                break;
            }

                //@ assert 0 <= uxCount;
                //@ assert 0 <= uxIndex <= uxSourceLen;
                //@ assert 0 <= uxNameLen <= uxDestLen;

            /*@
                loop invariant 0 <= uxCount;
                loop invariant 0 <= uxIndex <= uxSourceLen;
                loop invariant 0 <= uxNameLen <= uxDestLen;
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
                //@ assert uxNameLen < uxDestLen;
                //@ assert uxIndex < uxSourceLen;
                pcName[ uxNameLen ] = ( char ) pucByte[ uxIndex ];
                uxNameLen++;
                uxIndex++;
                //@ assert \at(pcName, Pre) == \at(pcName, Here);
                //@ assert \at(pucByte, Pre) == \at(pucByte, Here);                
            }
            //@ assert \at(pcName, Pre) == \at(pcName, Here);
            //@ assert \at(pucByte, Pre) == \at(pucByte, Here);

        }

        /* Confirm that a fully formed name was found. */
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
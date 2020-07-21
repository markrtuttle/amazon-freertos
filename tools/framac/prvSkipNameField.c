#include <stdint.h>
#include <stddef.h>
#include <limits.h>

#define dnsNAME_IS_OFFSET					( ( uint8_t ) 0xc0 )

/*@
    predicate is_size_t(size_t n) = 
        0 <= n <= SIZE_MAX;
*/

/*@
    requires \valid(pucByte + (0 .. SIZE_MAX));
	requires \forall size_t j; 0 <= j <= SIZE_MAX ==> is_size_t(pucByte[j]);
	requires is_size_t(uxLength);
    
	assigns \nothing;

	behavior zeroLength:
		assumes uxLength == 0;
		ensures \result == 0U;
	
	behavior nameIsOffset:
		assumes (pucByte[0U] & dnsNAME_IS_OFFSET) == dnsNAME_IS_OFFSET;
		ensures uxLength <= sizeof( uint16_t ) <==> \result == 0U;

	behavior fullName:
		assumes uxLength != 0U && ( pucByte[0U] & dnsNAME_IS_OFFSET ) != dnsNAME_IS_OFFSET;


*/
static size_t prvSkipNameField( const uint8_t *pucByte,
								size_t uxLength )
{
size_t uxChunkLength;
size_t uxSourceLenCpy = uxLength;
size_t uxIndex = 0U;

	if( uxSourceLenCpy == 0U )
	{
		uxIndex = 0U;
	}
	/* Determine if the name is the fully coded name, or an offset to the name
	elsewhere in the message. */
	else if( ( pucByte[ uxIndex ] & dnsNAME_IS_OFFSET ) == dnsNAME_IS_OFFSET )
	{
		/* Jump over the two byte offset. */
		if( uxSourceLenCpy > sizeof( uint16_t ) )
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
		/* pucByte points to the full name. Walk over the string. */
        /*@
            loop invariant 1U <= uxSourceLenCpy <= uxLength;
            loop assigns uxChunkLength, uxSourceLenCpy, uxIndex;
            loop variant uxSourceLenCpy;
        */        
		while( ( pucByte[ uxIndex ] != 0U ) && ( uxSourceLenCpy > 1U ) )
		{
			/* Conversion to size_t causes addition to be done
			in size_t */
			uxChunkLength = ( ( size_t ) pucByte[ uxIndex ] ) + 1U;

			if( uxSourceLenCpy > uxChunkLength )
			{
				uxSourceLenCpy -= uxChunkLength;
				uxIndex += uxChunkLength;
			}
			else
			{
				uxIndex = 0U;
				break;
			}
		}

		/* Confirm that a fully formed name was found. */
		if( uxIndex > 0U )
		{
			if( pucByte[ uxIndex ] == 0U )
			{
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
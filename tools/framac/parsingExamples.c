#include <stdint.h>

struct Message {
  uint16_t A;
  uint16_t B;
  uint16_t C;
};

typedef struct Message Message_t;

/*@
    predicate is_uint8_t(integer n) =
        0 <= n < 1<<8;
    
    predicate is_uint16_t(integer n) =
        0 <= n < 1<<16;

    predicate max_shifted(integer n) = 
        0 <= n < (1<<16 - 1<<8 + 1 );
*/

/*@
    requires \valid(buffer + (0 .. bufferLength - 1));
    requires \forall int i; 0 <= i < bufferLength ==> is_uint8_t(*(buffer + i));
    requires \forall int i; 0 <= i < bufferLength ==> is_uint16_t(*(buffer + i) << 8);

    assigns \nothing;

    ensures bufferLength <= sizeof(Message_t) ==> \result == 0;
    //ensures bufferLength > sizeof(Message_t) ==> \result == (uint16_t)(*buffer << 8 + *(buffer + 1));
*/
uint16_t parseBuffer(uint8_t *buffer, uint16_t bufferLength) {
    uint8_t *pucByte = buffer;

    if (bufferLength <= sizeof(Message_t)) {
        return 0;
    }
    //@assert is_uint8_t(*pucByte);
    //@assert is_uint8_t(*(pucByte + 1));
    //@assert is_uint16_t(*pucByte << 8);
    //@assert max_shifted(*pucByte << 8);
    //@assert is_uint16_t(*pucByte << 8 + (1<<8 - 1));
    uint16_t A = *pucByte << 8 +  *(pucByte + 1);
    return A;
}                                    

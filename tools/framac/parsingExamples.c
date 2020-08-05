#include <stdint.h>
#include <limits.h>

struct Message {
  uint16_t A;
  uint16_t B;
  uint16_t C;
};

typedef struct Message Message_t;

/*@
    predicate is_uint8_t(integer n) =
        0 <= n <= UCHAR_MAX;
    
    predicate is_uint16_t(integer n) =
        0 <= n <= USHRT_MAX;
*/

/*@
    requires \valid(buffer + (0 .. bufferLength - 1));
    requires \forall uint16_t i; 0 <= i < bufferLength ==> is_uint8_t(*(buffer + i));
    requires \forall uint16_t i; 0 <= i < bufferLength ==> is_uint16_t(*(buffer + i) * 2^8);
    requires is_uint16_t(bufferLength);

    assigns \nothing;

    ensures bufferLength <= sizeof(Message_t) ==> \result == 0;
    ensures bufferLength > sizeof(Message_t) ==> \result == (uint16_t)(*buffer * 2^8 + *(buffer + 1));
*/
uint16_t parseBuffer(uint8_t *buffer, uint16_t bufferLength) {
    uint8_t *pucByte = buffer;

    if (bufferLength <= sizeof(Message_t)) {
        return 0;
    }
    //@assert is_uint8_t(*pucByte);
    //@assert is_uint8_t(*(pucByte + 1));
    //@assert is_uint16_t(*pucByte * 2^8);
    uint16_t A = *pucByte * 2^8 +  *(pucByte + 1);
    return A;
}   

/*@
    requires is_uint8_t(a);
    assigns \nothing;
*/
uint16_t foo(uint8_t a) {
    uint16_t A = a * 2^8 + (2^8 - 1);
    return A;
}

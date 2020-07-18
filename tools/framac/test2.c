#include <stdlib.h>

#include <stdint.h>

/*@
  requires \valid(src + (0 .. srcLen-1));
  requires \valid(dst + (0 .. dstLen-1));
  requires \separated(src, dst);
  assigns dst[0 .. srcLen-1];
 */
void copy2(uint8_t *src, size_t const srcLen, uint8_t *dst, size_t const dstLen) {

  unsigned int i = 0;
  /*@
    loop invariant 0 <= i <= srcLen;
    loop invariant 0 <= i <= dstLen;
    loop invariant \separated(src, dst);
    loop assigns dst[0 .. dstLen-1], i;
  */
  while (i < srcLen && i < dstLen) {
    uint8_t count = src[i];
    //@ assert -256 <= count <= 256;
    unsigned j = 0;

    /*@
      loop invariant 0 <= i <= srcLen;
      loop invariant 0 <= i <= dstLen;
      loop invariant 0 <= j <= count;
      loop invariant \separated(src, dst);
      loop assigns dst[0 .. dstLen-1], i, j;
    */
    while (j < count && i < srcLen && i < dstLen) {
      dst[i] = src[i];
      i++;
      j++;
    }
  }

}

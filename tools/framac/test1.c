  #include <stdlib.h>

/*@
  requires \valid(src + (0 .. srcLen-1));
  requires \valid(dst + (0 .. dstLen-1));
  requires \separated(src, dst);
  assigns dst[0 .. srcLen-1];
 */
void copy1(char *src, size_t srcLen, char *dst, size_t dstLen) {
  unsigned int i = 0;

  /*@
    loop invariant 0 <= i <= srcLen;
    loop invariant 0 <= i <= dstLen;
    loop assigns dst[0 .. srcLen-1], i;
  */
  while (i < srcLen && i < dstLen) {
    dst[i] = src[i];
    i++;
  }

}
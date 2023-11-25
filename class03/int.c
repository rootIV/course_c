#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
* int8_t, int16_t, int32_t : pertence a biblioteca <stdint.h>
* %zu : unsigned int 32 bits, unsigned long 64 bits size_t
* %zd : signed int 32 bits, signed long 64 bits ssize_t
* %llu: unsigned long long
*/

int main(void){
  int8_t sInt = CHAR_MAX;
  int8_t sIntMin = CHAR_MIN;
  uint8_t uInt = UCHAR_MAX;
  long long sLong = LLONG_MAX;
  size_t sizeT;
  register int registerInt;

  printf("O valor máximo de int%zd_t: %d\n", sizeof sInt * 8, sInt);
  printf("O valor mínimo de int%zd_t: %d\n", sizeof sIntMin * 8, sIntMin);
  printf("O valor máximo de unsigned uint%zu_t: %u\n", sizeof uInt * 8, uInt);
  printf("O valor máximo de long long (%zd bits): %llu\n", sizeof sLong * 8, sLong);
  printf("O valor de size_t (%zd bits): %llu\n", sizeof sLong * 8, sLong);
  printf("O valor de register int (%zd bits): %d\n", sizeof sLong * 8, registerInt);

  return 0;
}

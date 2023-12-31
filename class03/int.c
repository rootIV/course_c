#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
* int8_t, int16_t, int32_t : belongs to <stdint.h>
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

  printf("Max value of int%zd_t: %d\n", sizeof sInt * 8, sInt);
  printf("Min value of int%zd_t: %d\n", sizeof sIntMin * 8, sIntMin);
  printf("Max value of unsigned uint%zu_t: %u\n", sizeof uInt * 8, uInt);
  printf("Max value of long long (%zd bits): %llu\n", sizeof sLong * 8, sLong);
  printf("size_t value (%zd bits): %llu\n", sizeof sLong * 8, sLong);
  printf("int register (%zd bits) value: %d\n", sizeof sLong * 8, registerInt);

  return 0;
}

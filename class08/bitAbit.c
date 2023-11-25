#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * & and
 * 1 1 : 1
 * 1 0 : 0
 * 0 1 : 0
 * 0 0 : 0
 * | or
 * 1 1 : 1
 * 1 0 : 1
 * 0 1 : 1
 * 0 0 : 0
 * ^ xor (ou exclusivo)
 * 0 1 : 1
 * 1 0 : 1
 * 0 0 : 0
 * 1 1 : 0
 * ~ not
 * 1 : 0
 * 0 : 1
 * << shift left
 * >> shift right
 * */

int main(void)
{
  int a = 0b1000;
  int b = 0x1010;
  int c = 10;
  //int a = 0b10000000000000000000000000000000;
  //int b = 0b01111111111111111111111111111111;

  //printf("O resultado de a, b e c : %d, %d, %d\n", a, b, c);
  printf("O resultado de shift left a << 1 : %d\n", a << 3);
  printf("O resultado de shift right a >> 1 : %d\n", a >> 2);
  /*printf("O resultado de b : %d\n", b);
   * printf("O resultado de ~a : %d\n", ~a);
   * printf("O resultado de ~b : %d\n", ~b);
   * printf("O resultado de a | b : %d\n", a | b);
   * printf("O resultado de a & b : %d\n", a & b);
   * printf("O resultado de a ^ b : %d\n", a ^ b);
  */

  return 0;
}

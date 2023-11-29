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
 * ^ xor (or exclusive)
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

  //printf("result of 'a', 'b' e 'c' : %d, %d, %d\n", a, b, c);
  printf("shift left a << 1 result: %d\n", a << 1);
  printf("shift right a >> 1 result : %d\n", a >> 1);
  /*printf("b result: %d\n", b);
   * printf("~a result: %d\n", ~a);
   * printf("~b result: %d\n", ~b);
   * printf("a | b result: %d\n", a | b);
   * printf("a & b  result: %d\n", a & b);
   * printf("a ^ b  result: %d\n", a ^ b);
  */

  return 0;
}

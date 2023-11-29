#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
* %p : Pointers 
* &x : Variable memory pointer (x = variable)
* &x[p] : Array variable position memory pointer (p = position (int))
*/

int main(void){
  //valores positivos
  unsigned char c[3];

  printf("array c size in memory is: %zu bytes\n", sizeof c);
  printf("array c element size is: %zu\n", sizeof c / sizeof (char));
  printf("another way to see array element size: %zu\n", sizeof c / sizeof c[0]);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;
  //c[1] = 0xff;
  //c[2] = 8;
  

  printf("c[0] is: %d\n", c[0]);
  printf("c[1] is: %d\n", c[1]);
  printf("c[2] is: %d\n", c[2]);
  
  printf("array c memory address: %p\n", c);
  printf("array c memory address pointer: %p\n", &c);
  printf("array c[0] memory address: %p\n", &c[0]);
  printf("array c[1] memory address: %p\n", &c[1]);

  return 0;
}

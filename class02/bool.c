#include <stdio.h>
#include <stdbool.h>

/*
* %lu : long unsigned
*/

int main(void){
  bool b;

  b = true;

  b = false;
  
  printf("b (bool) size is : %lu\n", sizeof b);

  return 0; 
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//shared same memory area (if chang one, change others)
union st {
  unsigned char id;
  unsigned int number;
};

int main(void){
  union st s; //struc base size is 8 bytes

  s.number = 2023;
  s.id = 0xe0;

  printf("s.id: %d\n", s.number);

  return 0;
}

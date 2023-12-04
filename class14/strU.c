#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st2{
  int a;
  int b;
  int c;
};

//char 1 byte + int 4 bytes (round to base: 8 bytes) + 12 bytes struct st2 = 20 bytes
struct st {
  unsigned char id;
  unsigned int number;
  struct st2 s2;
};

int main(void){
  struct st s; //struc base size is 8 bytes

  s.id = 3;
  s.number = 2023;

  printf("s.id: %d\n", s.id);
  printf("s.number: %d\n", s.number);

  printf("sizeof(struct st): %ld\n", sizeof(struct st));

  return 0;
}

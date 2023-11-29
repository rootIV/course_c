#include <stdio.h>

int main(void){
  signed char c;
  
  //%lu - to long unsigned
  //%i - to integer
  printf("C size is : %lu\n", sizeof c);
  printf("Char size is : %lu\n", sizeof (char));
  printf("C (Char) size is : %lu bytes / %lu bits\n", sizeof c, sizeof c * 8);
  
  c = 127;
  printf("C value is : %i\n", c);

  return 0;
}

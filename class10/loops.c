#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
 // unsigned int i;

//loop:
  for(unsigned int i = 0; i < 3; i++)
  {
    printf("i value: %u\n", i);
  }

  //i++;

  /*if(i < 3)
   goto loop;*/

  return 0;
}

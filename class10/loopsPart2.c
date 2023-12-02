#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
  unsigned int i = 0; 

  while (i < 3){
    printf("Entered into while loop: %u\n", i);
    i++;
  }

  for (i = 0; i < 3; i++)
  {
    printf("Entered into for loop: %u\n", i);
    switch(i){
      case 0:
        printf("Entered into switch loop: %u\n", i);
        break;
      case 1:
        printf("Entered into switch loop: %u\n", i);
        break;
      case 2:
        printf("Entered into switch loop: %u\n", i);
        break;
      default:
        printf("Undefined case or outrange number\n");
        break;
    }
  }

  return 0; 
}

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
  unsigned int i = 0;

  for (; i < 3; i++)
  {
    printf("O valor de i é: %u\n", i);
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

  while (i < 3){
    print("Entered into while loop é: %u\n", i)
  }

  return 0;
}

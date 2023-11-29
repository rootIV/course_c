#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
  int a = 359;

  if (-1 == a)
  {
    int key = 3;
    printf("key: %d\n", key);
  } 

  /*{  
    int key = 3;
    print("key: %d\n", key)
  }*/

  printf("'a' value: %d\n", a);

  return 0;
}

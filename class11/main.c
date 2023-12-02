#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i; //int32: 4 bytes allocated
  printf("'i' address: %p\n'i' size: %zu\n", &i, sizeof i);
  printf("'i' content: %d\n\n", i);

  int *p = &i; //pointer: 8 bytes allocated 
  printf("'p' address: %p\n'p' size: %zu\n", &p, sizeof p);
  printf("'p' content: %p\n\n", p);

  *p = 9;

  printf("%d\n\n", *p);

  //int *j; or
  int *j = NULL; //not allocated
 
  printf("address where 'j' points: %p\n", j);
  j = malloc(sizeof (int)); //same as malloc(4), allocate 4 bytes and return a pointer of the allocated memory
  
  printf("address where 'j' points: %p\n", j);

  *j = 9;

  printf("j: %d\n", *j); 
  free(j); //free allocated memory (fix memory leak)

  return 0;
}

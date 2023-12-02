#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
  int A[] = {2017, 2018, 2019};

  for(int i = 0; i < 3; i++){
    printf("A[%d]: %d (%p)\n", i, A[i], (void*)&A[i]);

    for(int j = 0; j < 3; j++){
      if(A[i] + j > 2016 && A[i] + j < 2020){
        printf("OP: A[%d] + %d: %d [%p]\n", i, j, A[i] + j, (void*)&A[i] + j);
      }
      for(int k = 0; k < 3; k++){
        if(i > 0 && A[i] == A[i - k] + j){
          printf("REUSING: A[%d] + %d: %d [%p]\n", i - k, j, A[i - k] + j, (void*)&A[i - k] + j);
        }
        if(i > 0 && A[i] + 1 == A[i - k] + j){
          printf("REUSING: A[%d] + %d: %d [%p]\n", i - k, j, A[i - k] + j, (void*)&A[i - k] + j);
        }
      }
    }
    puts("-----------------------------------");
  }
  

  printf("\nArray 'A' memory address is: %p\n", &A);
  printf("Pointer value of (*A): %d\n", *A);

  return 0; 
}


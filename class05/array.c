#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
* %p : Pointers 
* &x : Variable memory pointer (x = variable)
* &x[p] : Array variable position memory pointer (p = position (int))
*/

int main(void){
  //valores positivos
  unsigned char c[3];

  printf("O tamanho da array c na memoria é: %zu bytes\n", sizeof c);
  printf("O numero de elementos da array é: %zu\n", sizeof c / sizeof (char));
  printf("O numero de elementos da array é: %zu\n", sizeof c / sizeof c[0]);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;
  //c[1] = 0xff;
  //c[2] = 8;
  

  printf("O elemento 0 de c é: %d\n", c[0]);
  printf("O elemento 1 de c é: %d\n", c[1]);
  printf("O elemento 2 de c é: %d\n", c[2]);
  
  printf("O endereço do array c em memoria: %p\n", c);
  printf("O endereço do array &c em memoria: %p\n", &c);
  printf("O endereço do primeiro elemento do array c em memoria: %p\n", &c[0]);
  printf("O endereço do segundo elemento do array c em memoria: %p\n", &c[1]);

  return 0;
}

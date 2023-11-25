#include <stdio.h>

int main(void){
  signed char c;
  printf("O tamanho de c é: %lu\n", sizeof c);
  printf("O tamanho do char é: %lu\n", sizeof (char));
  printf("O tamanho de c (char): %lu bytes / %lu bits\n", sizeof c, sizeof c * 8);
  
  c = 127;
  printf("Valor de c: %i\n", c);

  return 0;
}

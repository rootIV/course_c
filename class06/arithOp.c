#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * = atribuição
 * + - unarios (positivo e negativo)
 * + - binarios (adição e subtração)
 * * / (multiplicação e divisão)
 * % (resto da divisão)
 * ++ (incremento)
 * -- (decremento)
 */

int main(void){
  int a;  

  a = (4 + 2) * 3;
  printf("Variable 'a' : %d\n", a);

  printf("\nIncrementing 'a' (++a)...\n");
  ++a;
  printf("Variable 'a' incremented: %d\n", a);

  //First print a with previous value than increment
  printf("\nShowing variable 'a' incrementing after (a++): %d\n", a++);
  printf("Variable already incremented (but printed last value before increment),\nIncrementing variable 'a': a++\n");
  a++;
  printf("Variable 'a' after increment (incremented 2 time but not showed): %d\n", a);

  return 0;
}

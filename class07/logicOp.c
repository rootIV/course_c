#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * Em operadores:
 * 0 : Negativo
 * > 0 : Positivo
 *
 * && : Avaliada Primeiro
 * || : Ultimo a ser resolvido
 * Ex : 
 * (&&||&&||&&||&&||&&||&&||&&||&&)
 * (&&||&&||&&||&&)
 * (&&||&&)
 *
 * Conjuncao (E, AND)
 * 0 0 - Falso
 * 0 1 - Falso
 * 1 0 - Falso
 * 1 1 - Verdadeiro
 *
 * Disjuncao (Ou, OR)
 * 0 0 - Falso
 * 1 0 - Verdadeiro
 * 0 1 - Verdadeiro
 * 1 1 - Verdadeiro
 */

int main(void)
{
  int a = 8;
  int b = 9;

  printf("%d\n", a == b || b < 4 && b < 9);

  return 0;
}

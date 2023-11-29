#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * Operators:
 * 0 : Negative
 * > 0 : Positive
 *
 * && : evaluated first
 * || : last to be evaluated
 * Ex : 
 * (&&||&&||&&||&&||&&||&&||&&||&&)
 * (&&||&&||&&||&&)
 * (&&||&&)
 *
 * Conjunction (AND)
 * 0 0 - False
 * 0 1 - False
 * 1 0 - False
 * 1 1 - True
 *
 * Disjunction (OR)
 * 0 0 - False
 * 1 0 - True
 * 0 1 - True
 * 1 1 - True
 */

int main(void)
{
  int a = 8;
  int b = 9;

  printf("%d\n", a == b || b < 4 && b < 9);

  return 0;
}

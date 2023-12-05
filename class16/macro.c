#include <stdio.h>
#define QUAD(x) ((x)*(x))
#define MAX(x,y) (((x) > (y)) ? (x) : (y))
#define MAX3(x,y,z) (MAX(MAX((x), (y)), MAX((y), (z))))

#define DEBUG 1

#define VAR(x) printf("The variable "#x" has value: %d\n", x)

int main(void){
  int counter = 90;

  printf("Square Root of: %d is: %d\n", 8, QUAD(8));
  printf("Who is bigger x: %d or y: %d? %d\n", 4, 11, MAX(4, 11));
  printf("Who is bigger x: %d y: %d or z:%d? %d\n", 25, 4, 11, MAX3(25, 4, 11));

#if DEBUG
  printf("%s %s Line: %d\n", __DATE__, __TIME__, __LINE__);
  VAR(counter);
#endif

  int *p = (void *)0;

  if(p == NULL)
    printf("P is NULL!\n");

  return 0;
}

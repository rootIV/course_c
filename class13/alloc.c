#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size) { \
  ptr = malloc(size); \
  if(ptr == NULL) { \
    fprintf(stderr, "insuficient memory\n"); \
    exit(1); \
  } \
}

void *malloc_s(size_t size){
  void *ptr;
  ptr = malloc(size);

  if(ptr == NULL){
    fprintf(stderr, "insuficient memory\n");
    exit(1);
  }

  return ptr;
}

int main(int argc, char *argv[]){

  int *p, i;

  MALLOC(p, 6 * sizeof (int));

  memset(p, 0, 6 * sizeof (int));

  *p = 9;
  *(p + 1) = 54;
  *(p + 2) = 45;
  *(p + 3) = 65;
  *(p + 4) = 89;
  *(p + 5) = 99;

  p = realloc(p, 7 * sizeof (int));
  *(5+p) = 98;

  for(i = 0; i < 6; i++){
    printf("%d\n", *(p + i));
  }

  free(p);

  return 0;
}

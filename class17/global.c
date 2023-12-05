#include <stdio.h>

int i;

void func(void){
  int i;

  for(i = 0; i < 3; i++){
    printf("%d\n", i);
  }
}

int main(void){
  func();
  i++;
  return 0;
}


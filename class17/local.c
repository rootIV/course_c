#include <stdio.h>

void func(void){
  static int i = 0;  //extern != static, auto != volatile, signed != unsigned

  //for(; i < 3; i++){
    printf("%d\n", i++);
  //}
}

int main(void){
  func();
  return 0;
}


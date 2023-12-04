#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void erro(char *msg){
void erro(char msg[]){
  fprintf(stderr, "ERRO: %s\n", msg);
  exit(1);
}

int add(int n1, int n2, int n3){
  int res;

  res = n1 + n2 + n3;

  return res;
}

int main(void){
  int num1, num2, num3; 

  printf("Type num1 (int): ");
  scanf("%d", &num1);
  printf("Type num2 (int): ");
  scanf("%d", &num2);
  printf("Type num3 (int): ");
  scanf("%d", &num3);
  printf("\nnum1: %d - num2: %d - num3: %d\n", num1, num2, num3);

  if(num1 <= 0 || num2 <= 0 || num3 <= 0){
    erro("Values should be greater than 0.");
  }

  printf("\nResult of: num1 + num2 + num3: %d\n", add(num1, num2, num3));
  printf("Address of the function add: %p\n", add);
  
  return 0;
}

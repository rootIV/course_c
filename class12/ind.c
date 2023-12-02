#include <stdio.h>
#include <stdlib.h>

#define TAM 2

enum pieces { HORSE = 2, BISHOP = 3, TOWER = 4, QUEEN = 5 };

int main(int argc, char *argv[]){

  //char s[30] = "vitor";
  int tabu[TAM][TAM] = { 0 };

  int i, j;

  tabu[0][0] = HORSE;
  tabu[0][1] = BISHOP;
  tabu[1][0] = TOWER;
  *(*(tabu + 1) + 1) = QUEEN;


  for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      printf("tabu[%d][%d] = %d ", i, j, tabu[i][j]);
      if(j == TAM - 1){
        putchar('\n');
      }
    }
  }

  /*for(int i = 0; i < 30; i++){
    printf("%x ", s[i]);
  }
  printf("%c ", s[4]);
  printf("%c ", 4[s]);
  printf("%c ", *(s+4));
  printf("%c ", *(4+s));

  putchar('\n');*/

  return 0;
}

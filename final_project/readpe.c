#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fatal(char *msg){
  fprintf(stderr, "Erro: %s\n", msg);
  exit(1);
}

void usage(void){
  printf("Usage:\n\treadpe <file.exe>\n");
  exit(1);
}

bool isPE(const unsigned char *buffer){
  return (buffer[0] == 'M' && buffer[1] == 'Z');
}

int main(int argc, char *argv[]){
  FILE *fh;
  unsigned char buffer[32];

  if(argc != 2){
    usage();
  }

  fh = fopen(argv[1], "rb");

  if(fh == NULL){
    fatal("File not found or without permission to read!");
  }
  
  if(fread(buffer, 32, 1, fh) != 1){
    fatal("Can't read 32 bytes from file!");
  }
  
  fclose(fh);

  if(!isPE(buffer)){
    fatal("File don't seems a executable (PE).");
  }

  return 0;
}

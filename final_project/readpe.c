#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void fatal(char *msg){
  fprintf(stderr, "Erro: %s\n", msg);
  exit(1);
}

void usage(void){
  printf("Usage:\n\treadpe <file.exe>\n");
  exit(1);
}

int main(int argc, char *argv[]){
  if(argc != 2){
    usage();
  }
  
  PEFILE pe;
  pe.filepath = argv[1];

  petest_init(&pe);

  if(!petest_isPE(&pe))
    fatal("Argument File isn't a PE\nExiting...");

  printf("\nMade by: [V]1t0r\n");
  printf("\nFile:\t%s\n", pe.filepath);
  printf("MZ header: %x\n", pe.hdr_dos->e_magic);
  printf("COFF header offset: %x\n\n", pe.hdr_dos->e_lfanew);

  petest_deinit(&pe);

  return 0;
}

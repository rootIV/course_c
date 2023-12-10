#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
 
#pragma pack(push, 1) 

typedef struct {
  uint16_t e_magic;
  uint16_t e_cblp;
  uint16_t e_cp;
  uint16_t e_crlc;
  uint16_t e_cparhdr;
  uint16_t e_minalloc;
  uint16_t e_maxalloc;
  uint16_t e_ss;
  uint16_t e_sp;
  uint16_t e_csum;
  uint16_t e_ip;
  uint16_t e_cs; 
  uint16_t e_lfarlc;
  uint16_t e_ovno;
  uint16_t e_res[4]; 
  uint16_t e_oemid;
  uint16_t e_oeminfo;
  uint16_t e_res2[10];
  uint32_t e_lfanew; // sizeof(IMAGE_DOS_HEADER) + size of MS-DOS stub
} IMAGE_DOS_HEADER; 

#pragma pack(pop)

typedef struct{
  char *filepath;
  IMAGE_DOS_HEADER *hdr_dos;
} PEFILE;

bool petest_isPE(PEFILE *pe){
  return (pe->hdr_dos->e_magic == 0x5a4d);
}

bool petest_init(PEFILE *pe){
  FILE *f = fopen(pe->filepath, "rb");
  
  if(!f)
    return false;

  pe->hdr_dos = malloc(sizeof(IMAGE_DOS_HEADER));

  if(pe->hdr_dos == NULL)
    return false;

  fread(pe->hdr_dos, sizeof(IMAGE_DOS_HEADER), 1, f);

  fclose(f);

  return true;
}

void petest_deinit(PEFILE *pe){
  if(pe->hdr_dos)
    free(pe->hdr_dos);
}

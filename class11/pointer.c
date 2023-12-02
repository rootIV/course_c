#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int print(char *s){
  //while(*s != '\0')
  while(*s)
    putchar(*s++);
}

int main(void)
{
  char s[] = "Dev Vitor ";
  char *t = "Vitor Dev";
  char u[] = { 0x56, 0x69, 0x74, 0x6f, 0x72, 0x0a, 0x00 };

  puts(s);
  puts(t);
  print(u);

  return 0; 
}

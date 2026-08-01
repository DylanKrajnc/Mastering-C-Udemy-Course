#include <stdio.h>
#include <string.h>
#include "exclusive_or.h"

void print_flag(flag_t flag)
{
  // in a 32 bit integer, we could have 32 different flags

  flag_t constants[] = {READ, WRITE, APPEND}; // C doesn't provide an easy way to iterate over elements of an enum
  char symbols[] = "RWA";

  for(int i = 0; i < strlen(symbols); i++) {
    if(flag & constants[i]) {
      printf("%c", symbols[i]);
    }
  }

  printf("\n");
}

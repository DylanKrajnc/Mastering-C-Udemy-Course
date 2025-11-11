#include <stdio.h>

int main(int argc, const char *argv[]) 
{
  //char will always be 1 byte (8 bits)
  // Max: 2^7 - 1 (127)
  // Min: -2^7 (-128)
  char value = 127;
  printf("Value: %d\n", value);

  unsigned long size = sizeof(char);
  printf("Size of char: %lu\n", size);

  return 0;
}
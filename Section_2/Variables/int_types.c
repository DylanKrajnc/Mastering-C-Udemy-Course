#include <stdio.h>

// char, short int, int, long int, long long int

int main(int argc, const char *argv[]) 
{
  printf("Size of char: %lu\n", sizeof(char));
  printf("Size of char: %lu\n", sizeof(short));
  printf("Size of char: %lu\n", sizeof(int));
  printf("Size of char: %lu\n", sizeof(long));
  printf("Size of char: %lu\n", sizeof(long long));

  return 0;
}
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  const int SIZE = 20;
  char buffer[SIZE]; // In standard C, can't use a non-const var to init an arr
  memset(buffer, 'A', SIZE);

  strncpy(buffer, "abcdef", 3); // won't copy null terminator if I don't copy entire length of 2nd arg

  printf("%c\n", buffer[3]);

  buffer[3] = 0; // explictly adding a null term
  printf("%s\n", buffer);

  strncpy(buffer, "abcdef", 10);
  printf("%s\n", buffer);

  return 0;
}

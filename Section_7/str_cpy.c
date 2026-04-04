#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char dest[20];
  char source[] = "hello";

  strcpy(dest, source);

  printf("dest: %s\n", dest);

  return 0;
}

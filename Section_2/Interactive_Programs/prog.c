#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("Enter a character > ");
  char c = getchar();

  printf("\nYou entered: %c\n", c);

  return 0;
}
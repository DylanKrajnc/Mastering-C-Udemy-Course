#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("Enter a character > ");

  char c = getchar();

  // && - logical and
  if (c >= 'A' && c <= 'Z')
  {
    printf("\nYou entered a capital letter\n");
  }
  else
  {
    printf("\nYou did not enter a capital letter\n");
  }

  return 0;
}
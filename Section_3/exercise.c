#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("Enter a number from 0-9: ");
  char c = getchar() - '0';
  printf("\n");

  if(c >= 0 && c <= 9)
  {
    printf("The multiplication table for %d is: \n", c);
    for(int i = 1; i <= 12; ++i)
    {
      int calc = c * i;
      printf("%d * %d = %d\n", c, i, calc);
    }

    printf("\nThe multiplication table up to %d is: \n", c);
    for (int i = 1; i <= c; ++i)
    {
      for (int j = 1 ; j <= c; ++j)
      {
        int calc = i * j;
        if(calc < 10)
          printf("%d  ", calc);
        else
          printf("%d ", calc);
      }
      printf("\n");
    }
  }
  else
  {
    printf("The input was invalid!\n");
    return 1;
  }

  return 0;
}
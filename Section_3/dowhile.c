#include <stdio.h>

int main(int argc, const char *argv[])
{
  int counter = 0;

  do
  {
    counter++;
    printf("%d\n", counter);
  } while (counter < 5);

  return 0;
}
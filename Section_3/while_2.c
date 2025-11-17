#include <stdio.h>

int main(int argc, const char *argv[])
{
  int counter = 5;

  while(1)
  {
    if(counter-- < 1)
    {
      break;
    }

    if(counter == 3)
    {
      continue;
    }

    printf("%d ", counter);
    // 4 2 1 0
  }

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{
  srand(time(NULL)); // seed
  rand(); // first call always returns the same number on some systems

  printf("Random 0 - 1: %.1f\n", (double)rand()/RAND_MAX);

  for(int i = 0; i < 40; i++)
  {
    if(i % 20 == 0)
      printf("\n");

    unsigned char value = (unsigned char)(256 * (rand()/(RAND_MAX + 1.0)));
    printf("%4d", value);
  }

  printf("\n");
}

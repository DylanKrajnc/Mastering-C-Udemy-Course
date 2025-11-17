#include <stdio.h>

int main(int argc, const char *argv[])
{
  /*In C, all elements of an array need to be of the
  * same type.
  */
  
  int numbers[3]; // allocated on the stack (limited space)

  numbers[0] = 6;
  numbers[1] = 5;
  numbers[2] = 5;

  // Don't need to specify size if initializing at creation
  int values[] = { 5, 6, 7, 8 };

  printf("Size of array: %lu\n\n", sizeof(values));

  for (int i = 0; i < sizeof(values)/sizeof(int); ++i)
  {
    printf("At index %d: %d\n", i, values[i]);
  }

  return 0;
}
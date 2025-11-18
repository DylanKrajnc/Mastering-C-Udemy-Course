#include <stdio.h>

int main(int argc, const char *argv[])
{
  enum Fruit
  {
    APPLE,
    BANANA,
    ORANGE,
    CHERRY
  };

  enum Fruit fruit = APPLE;
  printf("Fruit: %d\n", fruit);

  printf("Enum: %d, %d, %d, %d\n", APPLE, BANANA, ORANGE, CHERRY);

  return 0;
}
#include <stdio.h>

int main(int argc, const char *argv[])
{
  // not a convention to make P capital here - but does highlight that it is a type
  struct Person
  {
    int id;
    float height;
  };

  struct Person bob = {22, 1.82f};

  bob.id = 21;
  bob.height = 1.78f;

  printf("Bob: %d, %.1f\n", bob.id, bob.height);

  return 0;
}
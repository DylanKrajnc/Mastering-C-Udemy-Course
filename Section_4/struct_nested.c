#include <stdio.h>

int main(int argc, const char *argv[])
{
  struct Person
  {
    int id;

    struct
    {
      float weight;
      float height;
    } data; // a field in person type
  };

  struct Person bob = { 21, { 75.1f, 178.2f }};

  printf("Bob %d, %.1f, %.1f\n", bob.id, bob.data.weight, bob.data.height);
  
  return 0;
}
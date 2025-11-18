#include <stdio.h>

int main(int argc, const char *argv[])
{
  // dont need to add struct name - anon struct name (not shown here)
  struct Values
  {
    int id;
    int value;
  } v1={2, 3}, v2={4, 5};

  printf("v1: %d, %d\n", v1.id, v1.value);  

  v2 = (struct Values){.id=23, .value=48}; // C99
  printf("v2: %d, %d\n", v2.id, v2.value);

  return 0;
}
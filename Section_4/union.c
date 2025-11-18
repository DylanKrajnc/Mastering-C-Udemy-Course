#include <stdio.h>

int main(int argc, const char *argv[])
{
  /*Main difference between a union and struct is that with a union
  * all different fields are stored in the same area of memory.
  */
  union Value
  {
    int driving_id;
    int passport_id;
  };

  union Value v;

  v.driving_id = 123;

  printf("size of v: %lu\n", sizeof(v)); //size of the biggest type in the union - in this case 4 bytes for one int

  printf("driving ID: %d\n", v.driving_id);
  printf("passport ID: %d\n", v.passport_id); //also 123

  // Can have two or more fields, can use any of them at different times and avoid memory wastage...
  // One good use is to represent the same data in two different ways.

  return 0;
}
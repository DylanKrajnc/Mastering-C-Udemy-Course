#include <stdio.h>
#include "data.h"

int main(int charc, const char *argv[]) {
  struct Item item1 = {1, {2, 3}};
  printf("item1: %d, {%d, %d}\n", item1.id, item1.v[0], item1.v[1]);

  /* In C, generally you can't set one array as a another array.
  * When the array is part of struct, you can set one struct as another
  * and the array will be copied over if the array is part of the 
  * struct as a field.
  */ 
  struct Item item2 = item1; // item2 is a complete independant copy
  item1.v[0] = 100; // Won't affect item2
  printf("item2: %d, {%d, %d}\n", item2.id, item2.v[0], item2.v[1]);

  return 0;
}

#include <stdio.h>
#include "data.h"

struct Item struct_munger(struct Item item)
{
  item.id = 7;
  item.v[0] = 1;
  item.v[1] = 2;

  return item;
}

int main(int charc, const char *argv[])
{
  struct Item item = {6, {7, 8}};
  printf("item: %d, {%d, %d}\n", item.id, item.v[0], item.v[1]);

  /* Passing a copy of the struct to the function.
  *  Passing a copy of the result of the function into result.
  */
  struct Item result = struct_munger(item); 

  printf("item: %d, {%d, %d}\n", item.id, item.v[0], item.v[1]);
  printf("result: %d, {%d, %d}\n", result.id, result.v[0], result.v[1]);

  return 0;
}

#include <stdio.h>
#include "data.h"

int main(int argc, const char *argv[]) {
  printf("count 1: %d\n", count);
  inc_count();
  printf("count 2: %d\n", count);

  return 0;
}

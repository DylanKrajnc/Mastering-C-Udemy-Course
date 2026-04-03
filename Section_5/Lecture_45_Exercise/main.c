#include <stdio.h>
#include "fib.h"

int main(int argc, const char *argv[])
{
  #define SIZE 9
  static int arr[SIZE] = {0};

  fib(arr, SIZE);

  printf("Fib numbers to %d: ", SIZE);
  for (int i = 0; i < SIZE-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d\n", arr[SIZE-1]);

  return 0;
}

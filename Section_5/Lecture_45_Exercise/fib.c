#include <stdio.h>
#include "fib.h" //Not needed, but helps ensure that implementation matches prototype

void fib(int arr[], int size)
{
  if (size < 2) {
    return;
  }

  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < size; i++) {
    arr[i] = arr[i-2] + arr[i-1];
  }
}

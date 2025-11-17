#include <stdio.h>
#include <memory.h>

int main(int argc, const char *argv[])
{
  #define SIZE 3
  int values1[SIZE];

  /*2nd arg: value you want to set to all the bytes in the array to
  * 3rd arg: number of bytes you want to set to that value
  */
  // advantage with memset is that we can zero out the array after creating it
  memset(values1, 0, sizeof(values1)); //not completely portable solution

  for(int i = 0; i < SIZE; ++i)
  {
    printf("%d ", values1[i]);
  }
  printf("\n");

  // int values2[SIZE] = {0}; // C89 - zeroes out all values
  // int values3[SIZE] = {7, 8}; //99 - remaining values set to default of that type - 0 for int
  // int values4[SIZE] = {[0]=10, [2]=30};
  int values5[SIZE] = {}; // C23

  for(int i = 0; i < SIZE; ++i)
  {
    printf("%d ", values5[i]);
  }
  printf("\n");


  return 0;
}
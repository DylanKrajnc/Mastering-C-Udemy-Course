#include <stdio.h>

int main(int argc, const char *argv[])
{
  /* A pointer holds the address of data in memory.
  *  & - address-of operator
  */

  int value = 7;
  /* Declaring a pointer to an int
  *  and setting it equal to the address of the value variable.
  *  Hungarian notation.
  */
  int *pvalue = &value; 
  printf("pointer: %p\n", pvalue); // hex

  /* Deferencing pointer to obatin value that the pointer is
  *  pointing to.
  */
  *pvalue = 8;
  printf("value: %d\n", value);
}

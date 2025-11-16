#include <stdio.h>

int main(int argc, const char *argv[])
{
  /* In postfix version, the value of the variable is
  * used in the expression first, then it's value is incremented.
  */

  int value = 0;
  printf("value: %d\n", value++);
  printf("value: %d\n", value);

  /*The prefix version of this operator is slightly more
  * efficient. When the postfix version is used, a copy needs
  * to be created for the variable for use in the expression.
  */

  value = 0;
  printf("value: %d\n", ++value);
  printf("value: %d\n", value);

  return 0;
}
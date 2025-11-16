#include <stdio.h>

int main(int argc, const char *argv[])
{
  // +, -, *, /, %

  printf("%d\n", 11%3);
  printf("%f\n", (float)11/3); 
  /*casting has a higher precedence than the math operator
  * Note that the 3 is actually treated as 3.0, but no 
  * promotion is happening - rather just a type of widening...
  */

  int value1 = 3;
  char value2 = 2;
  printf("%d\n", value1 + value2);
  /*What is happening above is known as integer promotion
  * Where value2 is converted to an int
  */

  return 0;
}
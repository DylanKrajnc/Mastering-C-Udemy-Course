#include <stdio.h>

int main(int argc, const char *argv[])
{
  // +, -, *, /, %

  /*Casting has a higher precedence than the math operator.
  * Note that the 3 is actually treated as 3.0, but no 
  * promotion is happening - rather just a type of widening...
  */
  printf("%d\n", 11%3);
  printf("%f\n", (float)11/3); 

  /*What is happening above is known as integer promotion
  * Where value2 is converted to an int
  */
  int value1 = 3;
  char value2 = 2;
  printf("%d\n", value1 + value2);

  return 0;
}
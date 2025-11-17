#include <stdio.h>

int main(int argc, const char *argv[])
{
  int temp = 4;
  
  /*The ternary operator is the only one in C
  * that takes three operands.
  */
  int cooling = temp > 3 ? 1 : 0;
  printf("Cooling %d\n", cooling);
  printf("Cooling is %s\n", cooling ? "ON" : "OFF");

  return 0;
}
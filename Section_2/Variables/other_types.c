#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main(int argc, const char *argv[])
{
  /* Floating point types */
  // float, double, long double
  // %f, %lf, $Lf 
  // long long doubles do exist but might have some issues on windows

  float value1 = 0.123123123123123123123123123f;
  double value2 = 0.123123123123123123123123123;
  long double value3 = 0.123123123123123123123123123L;

  printf("value1: %.30f, - size: %lu\n", value1, sizeof(value1));
  printf("value2: %.30lf, - size: %lu\n", value2, sizeof(value2));
  printf("value3: %.30Lf, - size: %lu\n", value3, sizeof(value3));

  bool flag = true; // added in C23 specification

  int8_t value4 = 123;
  int32_t value5 = 123;

  unsigned int value6 = 83;

  return 0;
}
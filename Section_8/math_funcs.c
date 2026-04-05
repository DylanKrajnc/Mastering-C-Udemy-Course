#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
  // M_PI is constant that is not part of the C standard
  const double PI = 3.141592;

  printf("2^3 = %.2f\n", pow(2,3));
  printf("round(3.1): %.2f\n", round(3.1));
  printf("ceil(3.1): %.2f\n", ceil(3.1));
  printf("sin(2 * PI): %.2f\n", sin(2 * PI));

  return 0;
}

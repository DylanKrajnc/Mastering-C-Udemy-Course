#include <stdio.h>

double multiply(int n, double d)
{
  return n*d;
}

int main(int argc, const char *argv[])
{
  double (*pfunc)(int, double) = &multiply; // & optional here - can just use name

  double result = (*pfunc)(5, 2.0);

  printf("result: %.2f\n", result);

  return 0;
}

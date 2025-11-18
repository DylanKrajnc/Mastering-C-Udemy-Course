#include <stdio.h>

int main(int argc, const char *argv[])
{
  struct S {
    int i1;
    int i2;
  };

  struct S s[10];

  for(int i = 0; i < 10; ++i)
  {
    s[i].i1 = i;
    s[i].i2 = 10-i;
  }

  for(int i = 0; i < 10; ++i)
  {
    printf("%2d, %2d\n", s[i].i1, s[i].i2);
  }

  return 0;
}
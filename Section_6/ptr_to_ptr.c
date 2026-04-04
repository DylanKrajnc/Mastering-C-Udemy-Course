#include <stdio.h>

const int N1 = 1;
const int N2 = 2;

// ** pointer to a pointer
void modify_pointer(const int **p)
{
  *p = &N2;
}

int main(int argc, const char *argv[])
{
  const int *p = &N1;
  printf("%d\n", *p);
  modify_pointer(&p);
  printf("%d\n", *p);

  return 0;
}
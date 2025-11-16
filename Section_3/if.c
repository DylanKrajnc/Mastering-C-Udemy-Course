#include <stdio.h>

int main(int argc, const char *argv[])
{
  int temp = 5;

  if(temp < 0)
  {
    printf("cold\n");
  }
  else if (temp < 4)
  {
    printf("okay\n");
  }
  else {
    printf("warm\n");
  }

  // Note that in C, 0 is false, and positive integers are true
  
  return 0;
}
#include <stdio.h>
#include "object_macros.h"

int main(int argc, const char *argv[])
{
  // Object like macros - weak convention to use capitilized naming 
  printf("%.3f\n", PI);
  printf("%s\n", NAME);

  char *days[] = DAYS;

  for(int i = 0; i < DAYS_IN_WEEK; i++) {
    printf("%s\n", days[i]);
  }

  return 0;
}

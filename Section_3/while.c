#include <stdio.h>

int main(int argc, const char *argv[])
{
  int counter = 0;

  while(counter < 5)
  {
    /*Postfix version of ++ is slightly less efficient
    * than the prefix version
    */

    counter++;
    printf("%d\n", counter);
  }

  return 0;
}
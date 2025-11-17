#include <stdio.h>

int main(int argc, const char *argv[])
{
  int value = 3;

  /*If you have a switch in a loop, and you need to break
  * out of the loop - you can't (Can't use to breaks in a row). 
  * Need to use GOTO.
  */

  switch(value)
  {
    case 1:
      printf("Got One");
      break; 
      /*Without break - if enter here, will fall through
      * to next case.
      */
    case 2:
      printf("Got Two");
      break;
    case 3:
      printf("Got Three");
      break;
    default:
      printf("Something else");
  }

  return 0;
}
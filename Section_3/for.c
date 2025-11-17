#include <stdio.h>

int main(int argc, const char *argv[])
{
  //for(;;) {} // infinite loop - like while(1)

  /*Can actually put any code you like in the middle
  * three sections. Only caviet is that the middle
  * section needs to evaluate to true or false.
  * Can chain multiple statements with && and ||.
  */
  for(int i = 0; i < 5; ++i)
  {
    // i is in scope here.
    printf("Looping %d.\n", i);
  }

  // i is out of scope here.

  return 0;
}
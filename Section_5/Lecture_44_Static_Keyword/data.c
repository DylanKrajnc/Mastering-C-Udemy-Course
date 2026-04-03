#include <stdio.h>
/* file scope - can't be used outside of the module in which it is
*  declared.
*/  
static int count;

/* Can also make functions static - won't be able to be used outside
*  of this file even through linkage. Good practice to make functions
*  static as much as possible.
*/
void inc_count()
{
  ++count;
}

void show_count()
{
  /* Variable becomes persistent. Will exist between calls.
  *  Won't be re-declared.
  */
  static int runs;
  printf("count %d: %d\n", runs, count);
  runs++;
}

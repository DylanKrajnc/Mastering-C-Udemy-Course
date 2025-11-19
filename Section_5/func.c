#include <stdio.h>
#include <stdbool.h> //bool is just window-dressing for an int

/*C doesn't have classes (obviously), but contains free
* standing functions which allows us to arrange programs
*/

/*Return type void - no return type
* If a function accepts no args, put void in parameter list to
* indicate that, but modern compilers won't complain if left
* empty.
* This function needs to be defined above where it is used.
*/
void show_info(int employee_id, bool on_holiday)
{
  printf("Employee: %d, on holiday: %d\n", employee_id, on_holiday);
}

int main(int charc, const char *argv[])
{
  show_info(123, true);

  return 0;
}
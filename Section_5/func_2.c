#include <stdio.h>
#include <stdbool.h> 

//Forward declared prototype of function.
void show_info(int employee_id, bool on_holiday);

int main(int charc, const char *argv[])
{
  //Call of the function.
  show_info(123, true);

  return 0;
}

/*Implementation of function.
* May not be defined until the linking phase of the program.
* Not relevant here as it is in the same file and only one object
* file will be created, however typically header files are used
* to store prototypes.
*/
void show_info(int employee_id, bool on_holiday)
{
  printf("Employee: %d, on holiday: %d\n", employee_id, on_holiday);
}
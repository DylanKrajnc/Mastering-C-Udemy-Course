#include <stdio.h>

int main(int argc, const char *argv[])
{
  /*Uses the preprocessor to replace the symbol wherever
  * it is used, but is limited to the file 
  */
  #define DOZEN 12
  printf("%d\n", DOZEN);

  // Convention to use capital
  const double PI = 3.141592;
  printf("%f\n", PI);
  
  return 0;
}
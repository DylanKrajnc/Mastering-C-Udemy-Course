#include <stdio.h>

int main(int argc, const char *argv[])
{
  /*This exercise is to collect a value from the user (0-9)
  * and convert this value (in miles) to kilometers.
  */

  // 1 Kilometer ~= 1.6 Miles
  printf("Enter a value from 0-9 representing miles: ");
  
  char m_char = getchar();
  int m = (int)m_char - 48; // or m_char - '0';

  printf("The value converted to kilometers is: %.1f\n", (float)m*1.6);

  return 0;
}
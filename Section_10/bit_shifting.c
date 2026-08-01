#include <stdio.h>
#include <stdint.h>

int main(int argc, const char *argv[])
{
  /* 0110 << 1 => 1100
     0011 >> 1 => 0001
  */

  uint32_t value1 = 0x000000FF;
  printf("%08x\n", value1); // %x to display hex value, %X for all caps - 08 width of 8 characters + adds padding

  uint32_t value2 = value1 << 8;
  printf("%08x\n", value2);

  value2 <<= 8;
  printf("%08x\n", value2);

  value2 >>= 16;
  printf("%08x\n", value2);

  int value3 = 27;
  printf("%d\n", value3 << 1); // equivalent to multiplying by 2

  return 0;
}

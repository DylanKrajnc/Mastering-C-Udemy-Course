#include <stdio.h>
#include <stdint.h>

// 1001 & 1100 => 1000

int main(int argc, const char *argv[])
{
  uint32_t value1 = 0x12345678;
  printf("%08x\n", value1);

  uint32_t value2 = value1 & 0xff00ff00;
  printf("%08x\n", value2);

  value1 &= 0xff000000;
  printf("%08x\n", value1);

  return 0;
}
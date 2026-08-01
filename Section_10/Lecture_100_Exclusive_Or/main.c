#include "exclusive_or.h"

int main(int charc, const char *argv[])
{
  // 1101 ^ 0110 => 1011

  flag_t flags = READ;
  print_flag(flags);

  flags |= WRITE;
  print_flag(flags);

  flags |= WRITE;
  print_flag(flags);

  flags ^= APPEND;
  print_flag(flags);

  flags ^= APPEND;
  print_flag(flags);

  return 0;
}

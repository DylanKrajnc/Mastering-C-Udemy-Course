#include <stdio.h>

int main(int charc, const char *argv[])
{
  char filename[] = "test.bin";

  FILE *fh = fopen(filename, "wb");

  if(!fh) {
    printf("Could not write to %s.", filename);
    return 1;
  }

  int value = 1234;

  #define SIZE 4
  double values[SIZE] = {6.1, 7.2, 8.3, 9.4};

  // returns number of objs written - not size of objs written
  fwrite(&value, sizeof(int), 1, fh);
  // or (values, siezof(values), 1, fh)
  fwrite(values, sizeof(values[0]), SIZE, fh);

  fclose(fh);

  printf("Written %s.\n", filename);

  return 0;
}

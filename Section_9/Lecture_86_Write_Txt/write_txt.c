#include <stdio.h>

int main(int argc, const char *argv[])
{
  char filename[] = "test.txt";

  /* w - write / r - read
  * Can also add b, to indicate binary file, left out - text file
  */
  FILE *fh = fopen(filename, "w");

  if (fh == NULL)
  {
    printf("Unable to create file %s.", filename);
    return 1;
  }

  fprintf(fh, "This is a line of text.\n");
  fprintf(fh, "Another line of text.\n");
  fprintf(fh, "This makes %d lines in total.\n", 3);

  fclose(fh);

  return 0;
}

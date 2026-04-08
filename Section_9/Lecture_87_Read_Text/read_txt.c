#include <stdio.h>

int main(int argc, const char *argv[])
{
  char filename[] = "test.txt";

  FILE *fh = fopen(filename, "r");

  if (fh == NULL)
  {
    printf("Unable to open file %s.", filename);
    return 1;
  }

  const unsigned int LINESIZE = 128;
  char text[LINESIZE];

  // fets returns NULL if nothing else can be read
  while(fgets(text, LINESIZE, fh))
  {
    printf("%s", text);
  }

  fclose(fh);

  return 0;
}

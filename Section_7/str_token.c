#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char text[] = "It was the best of times";

  char *token = strtok(text, " ");

  while(token)
  {
    printf("Token: %s\n", token);
    token = strtok(NULL, " ");
  }

  return 0;
}

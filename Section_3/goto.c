#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i=0,j=0;

  while(i++<5)
  {
    while(j++<5)
    {
      printf("%d, %d\n",i,j);

      if(i*j>5)
      {
        //here we want to break out of both loops
        goto end_loop;
      }
    }
    j=0;
  }

  end_loop: //this is a label

  return 0;
}
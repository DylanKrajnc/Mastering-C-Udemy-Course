#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char expression[] = "five six cat three two nine zero";
  char answer_str[1024] = "";
  int answer = 0;

  char *token = strtok(expression, " ");
  
  int counter = 0;
  while(token)
  {
    int invalid = 1;
    char s[10] = "";

    if(strcmp(token, "zero") == 0)
    {
      strcpy(s, "0 ");
    }
    else if(strcmp(token, "one") == 0) 
    {
      strcpy(s, "1 ");
      answer = answer + 1;
    }
    else if(strcmp(token, "two") == 0) 
    {
      strcpy(s, "2 ");
      answer = answer + 2;
    }
    else if(strcmp(token, "three") == 0)
    {
      strcpy(s, "3 ");
      answer = answer + 3;
    }
    else if(strcmp(token, "four") == 0)
    {
      strcpy(s, "4 ");
      answer = answer + 4;
    }
    else if(strcmp(token, "five") == 0)
    {
      strcpy(s, "5 ");
      answer = answer + 5;
    }
    else if(strcmp(token, "six") == 0)
    {
      strcpy(s, "6 ");
      answer = answer + 6;
    }
    else if(strcmp(token, "seven") == 0)
    {
      strcpy(s, "7 ");
      answer = answer + 7;
    }
    else if(strcmp(token, "eight") == 0)
    {
      strcpy(s, "8 ");
      answer = answer + 8;
    }
    else if(strcmp(token, "nine") == 0)
    {
      strcpy(s, "9 ");
      answer = answer + 9;
    }
    else
    {
      invalid = 0;
      printf("Invalid token: %s\n", token);
    }

    if(invalid == 1) {
      if (counter != 0)
      {
        strcat(answer_str, "+ ");
      }
      strcat(answer_str, s);
    }

    token = strtok(NULL, " ");
    counter++;
  }

  printf("%s= %d\n", answer_str, answer);

  return 0;
}

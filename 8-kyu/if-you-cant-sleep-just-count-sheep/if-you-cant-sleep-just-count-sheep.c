#include <stdlib.h>
#include <stdio.h>
#include <string.h>
​
char *count_sheep(unsigned n)
{
  char *answer = (char*)malloc(sizeof(char) * ((n * 40) + 1));
  answer[0] ='\0';
  char buffer[30] = "";
  for(size_t i = 1; i <= n; i++)
  {
    sprintf(buffer, "%zu sheep...", i);
    strcat(answer, buffer);
  }
  return answer;
}
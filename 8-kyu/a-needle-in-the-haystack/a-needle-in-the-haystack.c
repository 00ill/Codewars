#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *find_needle(const char *const haystack[/* count */], size_t count)
{
  char *answer = malloc(256);
  int index = 0;
  for(int i = 0; i < count; i++)
  {
    if(strcmp(haystack[i], "needle") == 0) index = i;
  }
  sprintf(answer, "found the needle at position %d", index);
  return answer;
}
#include <stdlib.h>
#include <string.h>
char *smash (const char *const words[/* count */], size_t count)
{
  char *answer = calloc(4096, sizeof(char));
  answer[0] = '\0';
  for(size_t i = 0; i < count; i++)
  {
    strcat(answer, words[i]);
    if(i != count - 1) strcat(answer, " ");
  }
  return answer;
}
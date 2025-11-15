#include <stdlib.h>
#include <string.h>
char *longest (const char *s1, const char *s2)
{
  int array[26] = {0};
  int len = strlen(s1);
  for(int i = 0; i < len; i++)
  {
    array[s1[i] -'a']++;
  }
  len = strlen(s2);
  for(int i = 0; i < len; i++)
  {
    array[s2[i] -'a']++;
  }
  char *answer = calloc(27, sizeof(char));
  int index = 0;
  for(int i = 0; i < 26; i++)
  {
    if(array[i] != 0)
    {
      answer[index++] = i + 'a';
    }
  }
  return answer;
}
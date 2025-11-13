#include <stdlib.h>
#include <string.h>
//solution must allocate all required memory
//and return a free-able buffer to the caller.
​
char *disemvowel(const char *str)
{
  int len = strlen(str);
  char *answer = (char*)malloc(sizeof(char) * (len + 1));
  int index = 0;
  for(int i = 0; i < len; i++)
  {
    if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
       str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' )
    {
      answer[index++] = str[i];
    }
    answer[index] = '\0';
  }
  return answer;
}
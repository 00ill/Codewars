#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char *accum(const char *source)
{
    unsigned int len = strlen(source);
    char *str = (char*)malloc(sizeof(char) * (len + 1));
    strcpy(str, source);
    for(int i = 0; i < len; i++)
    {
      str[i] = tolower(str[i]);
    }
    char* answer = (char*)malloc(sizeof(char) * 4096);
    answer[0] ='\0';
    char temp[2] = {'a', '\0'};
    for(int i = 0; i < len; i++)
    {
      for(int j = 0; j <= i; j++)
      {
        if(j == 0) temp[0] = toupper(str[i]);
        else temp[0] = str[i];
        strcat(answer, temp);
      }
      if(i == len - 1) break;
      strcat(answer, "-");
    }
// returned pointer will be freed:
    return answer;
}
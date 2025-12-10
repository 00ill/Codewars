#include <stdlib.h>
​
char *replace(const char *s)
{
    size_t len = strlen(s);
    char *answer = calloc(len + 1, 1);
    for(int i = 0; i < len; i++)
    {
      answer[i] = s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
                  s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ? '!' : s[i];
    }
    return answer;
}
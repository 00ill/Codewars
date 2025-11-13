#include <stddef.h>
#include <string.h>
size_t get_count(const char *s)
{
    int answer = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        answer++;
    }
    return answer;
}
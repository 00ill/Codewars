#include <stdlib.h>
​
char *to_alternating_case(const char *s) {
    size_t len = strlen(s);
    char *answer = calloc(len + 1, 1);
    for(int i = 0; i < len; i++)
    {
      if(s[i] == toupper(s[i])) answer[i] = tolower(s[i]);
      if(s[i] == tolower(s[i])) answer[i] = toupper(s[i]);
    }
    return answer;
}
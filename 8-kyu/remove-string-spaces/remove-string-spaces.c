#include <stdlib.h>
​
// return a heap-allocated string
​
char *no_space(const char *str_in) {
    char *in;
    asprintf(&in, "%s", str_in);
    char *token = strtok(in, " ");
    char *answer = calloc(512, 1);
    answer[0] = '\0';
    while(token != NULL)
    {
      strcat(answer, token);
      token = strtok(NULL, " ");
      if(token == NULL) break;
    }
    return answer;
}
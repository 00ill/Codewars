#include <stdlib.h>
​
//  return a heap-allocated C-string
//  (memory will be freed by tester)
​
char *remove_url_anchor(const char *url_in) {
    char *answer = calloc(256, 1);
    char *copy = calloc(256, 1);
    strcpy(copy, url_in);
    char *token = strtok(copy, "#");
    sprintf(answer, "%s", token);
    return answer;
}
#include <stdlib.h>
​
char *position(char letter) {
    char *answer = calloc(100, 1);
    sprintf(answer, "%s%d", "Position of alphabet: ", letter - 'a' + 1);
    return answer;
}
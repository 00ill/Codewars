#include <stdlib.h>
​
char *number_to_string(int number) {
​
    char *answer = calloc(4096, 1);
    sprintf(answer, "%d", number);
    return answer;
}
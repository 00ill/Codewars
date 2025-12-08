#include <stdlib.h>
​
char *multi_table(int num)
{
    char *answer = calloc(512, 1);
    char *temp = calloc(512, 1);
    answer[0] = '\0';
    for(size_t i = 1; i <= 10; i++)
    {
      sprintf(temp, "%d %s %d %s %d%s", i, "*", num, "=", i * num, "\n");
      strcat(answer, temp);
    }
    answer[strlen(answer) - 1] = '\0';
    return answer;
}
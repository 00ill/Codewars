#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
​
void high_and_low(const char *numbers, char *result)
{
    int max = INT_MIN;
    int min = INT_MAX;
​
    const char *ptr = numbers;
    char *end;
​
    while (*ptr != '\0')
    {
        long num = strtol(ptr, &end, 10);
​
        if (num > max)
        {
            max = (int)num;
        }
        if (num < min)
        {
            min = (int)num;
        }
​
        ptr = end;
        while (*ptr == ' ')
        {
            ptr++;
        }
    }
​
    sprintf(result, "%d %d", max, min);
}
​
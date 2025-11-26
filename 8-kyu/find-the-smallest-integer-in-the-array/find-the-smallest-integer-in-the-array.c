#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
int find_smallest_int(const int array[/* len */], size_t len)
{
    int answer = INT_MAX;
    for(int i = 0; i < len; i++)
    {
      answer = answer > array[i] ? array[i] : answer;
    }
    return answer;
}
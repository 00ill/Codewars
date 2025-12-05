#include <stddef.h>
​
int positive_sum(const int values[/* count */], size_t count)
{
    int answer = 0;
    for(size_t i = 0; i < count; i++)
    {
      if(values[i] > 0) answer += values[i];
    }
    return answer;
}
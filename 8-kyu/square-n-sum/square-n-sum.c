#include <stddef.h>
​
int square_sum(const int values[/* count */], size_t count)
{
  int answer = 0;
  for(int i = 0; i < count; i++){
    answer += values[i] * values[i];
  }
  return answer;
}
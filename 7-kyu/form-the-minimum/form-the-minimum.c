#include <stdlib.h>
​
int minValue(const int* values, const size_t len)
{
  int num[10] = {0};
  for(int i = 0; i < len; i++)
  {
    num[values[i]]++;
  }
  int answer = 0;
  for(int i = 0; i < 10; i++)
  {
    if(num[i] > 0)
    {
      answer += i;
      answer *= 10;
    }
  }
  answer /= 10;
  return answer;
}
​
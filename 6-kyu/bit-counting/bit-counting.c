#include <stddef.h>
​
size_t countBits(unsigned value)
{
  size_t answer = 0;
  while(value > 0)
  {
    if(value & 1) answer++;
    value >>= 1;
  }
  return answer;
}
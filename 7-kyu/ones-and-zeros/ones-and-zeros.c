#include <stddef.h>
#include <math.h>
unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
  unsigned answer = 0;
  int power = 0;
  for(int i = count - 1; i >= 0; i--)
  {
    if(bits[i] == 1) answer += pow(2, power);
    power++;
  }
  return answer;
}
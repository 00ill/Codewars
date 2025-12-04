#include <limits.h>
int sum(const int numbers[/*length*/], int length)
{
    int min = INT_MAX, max = INT_MIN, sum = 0;
    if(length < 3) return 0;
    for(int i = 0; i < length; i++)
    {
      if(numbers[i] < min) min = numbers[i];
      if(numbers[i] > max) max = numbers[i];
      sum += numbers[i];
    }
    return sum - max - min;
}
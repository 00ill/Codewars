#include <stddef.h>
​
int count_digit(int num)
{
  int ret = 0;
  int array[10] = {0};
  while(num > 0)
  {
    array[num % 10]++;
    num /= 10;
    ret++;
  }
  return ret;
}
​
int find_longest(const int numbers[/* numbers_size */], size_t numbers_size)
{
    int max = 0;
    int index = 0;
    for(int i = 0; i < numbers_size; i++)
    {
      int count = count_digit(numbers[i]);
      if(count > max)
      {
        max = count;
        index = i;
      }
      
    }
    return numbers[index];
}
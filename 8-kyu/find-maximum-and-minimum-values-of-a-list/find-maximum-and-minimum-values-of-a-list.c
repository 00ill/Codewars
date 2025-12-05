#include <limits.h>
#include <stdlib.h>
int min(int* array, int arrayLength)
{
  int ret = INT_MAX;
  for(size_t i = 0; i < arrayLength; i++)
  {
    if(array[i] < ret) ret = array[i];
  }
  return ret;
}
​
int max(int* array, int arrayLength)
{
  int ret = INT_MIN;
  for(size_t i = 0; i < arrayLength; i++)
  {
    if(array[i] > ret) ret = array[i];
  }
  return ret;
}
#include <stddef.h>
​
int comp(const void *a, const void *b)
{
  if(*(const int*)a > *(const int*)b) return 1;
  if(*(const int*)a < *(const int*)b) return -1;
  return 0;
  
}
​
void sort_ascending (size_t length, int array[length])
{
  qsort(array, length, sizeof(int), comp);
}
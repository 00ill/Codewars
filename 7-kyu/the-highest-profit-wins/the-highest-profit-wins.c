#include <limits.h>
void min_max (const int arr[/* count */], int count, int *min, int *max)
{
// assign to the min and max pointers
    *min = INT_MAX;
    *max = INT_MIN; // fix me!
    for(int i = 0; i < count; i++)
    {
      if(arr[i] < *min) *min = arr[i];
      if(arr[i] > *max) *max = arr[i];
    }
}
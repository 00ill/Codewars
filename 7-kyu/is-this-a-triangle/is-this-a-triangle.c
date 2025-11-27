#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
int compare(void* a, void* b)
{
  return *(int*)a - *(int*)b;
}
bool is_triangle(int a, int b, int c)
{
  if(a <= 0 || b <= 0 || c <= 0) return false;
  int arr[3] = {a, b, c};
  qsort(arr, 3, sizeof(int), compare);
  if(arr[0] + arr[1] <= arr[2]) return false;
  
  return true;
}
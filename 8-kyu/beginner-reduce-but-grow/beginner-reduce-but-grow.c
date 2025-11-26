#include <stddef.h>
​
int grow(size_t size, const int arr[size]) {
  int answer = 1;
  for(int i = size - 1; i >= 0; i--)
  {
    answer *= arr[i];
  }
  return answer; //Your code comes here
}
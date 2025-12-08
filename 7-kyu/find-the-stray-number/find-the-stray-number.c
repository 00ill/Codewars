#include <stddef.h>
​
int stray(size_t n, int arr[n]) {
    int mem = arr[0];    
    if(arr[1] != mem)
    {
      return mem == arr[2] ? arr[1] : mem;
    }
    for(size_t i = 2; i < n; i++)
    {
      if(arr[i] != mem) return arr[i];
    }
}
// For c the function should return `false` if no non consecutive numbers are found
// It should return `true` if one is found and the pointer arg `first` set to the value
​
#include <stdbool.h>
#include <stdlib.h>
bool firstNonConsecutive (const int arr[/* length */], int length, int *first) {
    for(size_t i = 0; i < length - 1; i++)    
    {
      if(arr[i + 1] != arr[i] + 1) {*first = arr[i + 1]; return true;}
    }
    return false;
}
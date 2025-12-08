#include <stdlib.h>
​
// return a dynamically allocated int array
// return array will be freed by the tester
​
int *reverse_list(const int *array, size_t length) {
  int *answer = calloc(length, sizeof(int));
  for(int i = 0; i < length; i++)
  {
    answer[i] = array[length - 1 - i];
  }
  return answer;
}
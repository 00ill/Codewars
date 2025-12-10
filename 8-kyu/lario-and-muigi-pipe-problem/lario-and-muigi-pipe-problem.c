#include <stddef.h>
#include <stdlib.h>
//  return a dynamically allocated int array
//  set the pointer sz_out to size of output
//  return array will be freed by the tester
​
int *pipe_fix(size_t sz_in, const int input[sz_in], size_t *sz_out) { 
  size_t start = input[0];
  *sz_out = input[sz_in - 1];
  int *answer = calloc(*sz_out - start + 1, sizeof(int));
  for(size_t i = 0; i < *sz_out - start + 1; i++)
  {
    answer[i] = i + start;
  }
  *sz_out = *sz_out - start + 1;
  return answer;
}
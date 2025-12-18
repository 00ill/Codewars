#include <stddef.h>
#include <limits.h>
​
long sum_of_min(const int * const *nums, size_t rows, size_t cols)
{
    int min = INT_MAX;
    long answer = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
          if(min > nums[i][j]) min = nums[i][j];
        }
        answer += min;
        min = INT_MAX;
    }
    return answer;
}
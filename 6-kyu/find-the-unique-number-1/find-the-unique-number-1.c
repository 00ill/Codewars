#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#define ABS(X) ((X) < 0 ? -(X) : (X))
​
float finduniq(const float nums[/* n */], size_t n)
{
    float not_unique_num;
    if(ABS(nums[0] - nums[1]) < 0.000001) not_unique_num = nums[0];
    else if(ABS(nums[0] - nums[2]) < 0.000001) return nums[1];
    
    for(int i = 0; i < n; i++)
    {
      if(ABS(nums[i] - not_unique_num) > 0.000001) return nums[i];
    }
    return 0.0f;
}
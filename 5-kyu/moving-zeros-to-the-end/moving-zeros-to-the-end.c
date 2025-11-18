#include <stddef.h>
#include <stdlib.h>
void move_zeros(size_t len, int arr[len])
{
    int *temp = (int*)malloc(sizeof(int) * len);
    int index = 0;
    for(int i = 0; i < len; i++)
    {
      if(arr[i] != 0)
      {
        temp[index++] = arr[i];
      }
    }
    for(index; index < len; index++)
    {
      temp[index] = 0;
    }
    for(int i = 0; i < len; i++)
    {
      arr[i] = temp[i];
    }
    // mutate arr in place
}
​
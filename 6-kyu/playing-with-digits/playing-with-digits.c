#include <stdlib.h>
#include <math.h>
int digPow(int n, int p) {
  int count = 0, temp;
  temp = n;
  while(temp)
  {
    count++;
    temp /= 10;
  }
  int *arr = (int*)malloc(sizeof(int) * count);
  int index = 0;
  temp = n;
  count = 0;
  while(temp)
  {
    count++;
    arr[index++] = temp % 10;
    temp /= 10;
  }
  int sum = 0;
  for(int i = 0; i < count; i++)
  {
    sum += pow(arr[i], p + count - i - 1);
  }
  if(sum % n == 0) return sum / n;
  return -1;
}
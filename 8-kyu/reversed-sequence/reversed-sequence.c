/* Note: allocate memory yourself */
​
#include <stdlib.h>
​
unsigned short *reverse_seq(unsigned short num)
{
    unsigned short *answer = calloc(num, sizeof(unsigned short));
    int n = num;
    for(int i = 0; i < num; i++)
    {
      answer[i] = n--;
    }
    return answer;
}
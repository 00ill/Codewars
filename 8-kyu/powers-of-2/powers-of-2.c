#include <inttypes.h>
#include <stddef.h>
​
void powers_of_two (size_t n, uint64_t powers[n + 1])
{
    powers[0] = 1;
    if(n == 0) return;
    for(size_t i = 0; i < n; i++)
    {
      powers[i + 1] = powers[i] * 2;
    }
}
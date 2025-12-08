#include <stdbool.h>
​
bool is_even(double n)
{
    if(floor(n) != n) return false;
    if((long)n % 2 == 0) return true;
}
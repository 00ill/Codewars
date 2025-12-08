#include <stdbool.h>
#include <math.h>
​
bool is_square(int n) {
  if(sqrt(n) != (int)sqrt(n)) return false;
  return true;
}
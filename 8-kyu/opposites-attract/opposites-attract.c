#include <stdbool.h>
​
bool lovefunc(int flower1, int flower2) {
  if((flower1 & 1) && ((flower2 & 1) == 0)) return true;
  if((flower2 & 1) && ((flower1 & 1) == 0)) return true;
  return false;
}
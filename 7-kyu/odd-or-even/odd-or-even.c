#include <stddef.h>
​
const char *odd_or_even(const int v[/* sz */], size_t sz) {
  unsigned char bit = 0;
  for(int i = 0; i < sz; i++)
  {
    bit ^= (v[i] & 1);
  }
  if(bit) return "odd";
  return "even";
}
#include <stdbool.h>
#include <string.h>
bool validate_pin(const char *pin) {
  unsigned int len = strlen(pin);
  if(len != 4 && len != 6) return false;
  for(int i = 0; i < len; i++)
  {
    if('0' > pin[i] || pin[i] > '9') return false;
  }
  return true;
​
}
#include <stdbool.h>
#include <string.h>
bool xo (const char* str)
{
  int count = 0;
  unsigned int len = strlen(str);
  for(int i = 0; i < len; i++)
  {
    if(str[i] == 'x' || str[i] == 'X') count++;
    else if(str[i] == 'o' || str[i] == 'O') count--;
  }
  if(count) return false;
  return true;
}
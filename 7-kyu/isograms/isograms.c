#include <stdbool.h>
​
bool IsIsogram (const char *string) 
{
  char mem[26] = {0};
  unsigned int len = strlen(string);
  for(int i = 0; i < len; i++)
  {
    mem[toupper(string[i]) - 'A']++;
    if(mem[toupper(string[i]) - 'A'] > 1) return false;
  }
  return true;
}
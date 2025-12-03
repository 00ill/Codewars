#include <ctype.h>
char *makeUpperCase (char *string)
{
  unsigned int index = 0;
  while(string[index])
  {
    string[index++] = toupper(string[index]);
  }
  return string;
}
​
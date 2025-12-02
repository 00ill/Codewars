#include <string.h>
char *strrev (char *string)
{
  unsigned int len = strlen(string);
  char *temp = calloc(len + 1, sizeof(char));
  strcpy(temp, string);
  size_t index = 0;
  while(index < len)
  {
    string[index] = temp[len - 1 - index];
    index++;
  }
  return string; // reverse the string in place and return it
}
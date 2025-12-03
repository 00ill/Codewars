#include <sys/types.h>
#include <string.h>
​
ssize_t find_short(const char *s)
{
  char *str = calloc(strlen(s) + 1, sizeof(char));
  strcpy(str, s);
  char *delim = " ";
  char *token = strtok(str, delim);
  ssize_t len = strlen(token);
  while(token)
  {
    token = strtok(NULL, delim);
    if(!token) break;
    if(strlen(token) < len) len = strlen(token);
  }
  return len;
}
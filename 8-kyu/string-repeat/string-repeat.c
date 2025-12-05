#include <stdlib.h>
​
char *repeat_str(size_t count, const char *src)
{
  size_t len = strlen(src);
  char *answer = calloc(count * len + 1, sizeof(char));
  char *p = answer;
  for(size_t i = 0; i < count; i++)
  {
    memcpy(p, src, len);
    p += len;
  }
  return answer;
}
#include <stddef.h>
​
size_t *find_capitals (const char *word, size_t *uppercase_count)
{
// report the number of uppercase letters through the
// 'uppercase_count' pointer:
  *uppercase_count = 0;
// return a free-able pointer:
  size_t len = strlen(word);
  size_t *answer = calloc(len, sizeof(size_t));
  for(size_t i = 0; i < len; i++)
  {
    if(word[i] == toupper(word[i]))
    {
      answer[(*uppercase_count)++] = i;
    }
  }
  return answer;
}
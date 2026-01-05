#include <stdlib.h>
#include <stdio.h>
// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite
​
char *likes(size_t n, const char *const names[n]) {
    //  <----  hajime!
  char *buffer = calloc(256, 1);
  if(n == 0) sprintf(buffer, "no one likes this");
  if(n == 1) sprintf(buffer, "%s likes this", names[0]);
  if(n == 2) sprintf(buffer, "%s and %s like this", names[0], names[1]);
  if(n == 3) sprintf(buffer, "%s, %s and %s like this", names[0], names[1], names[2]);
  if(n > 3) sprintf(buffer, "%s, %s and %lu others like this", names[0], names[1], n - 2);
  return buffer;
}
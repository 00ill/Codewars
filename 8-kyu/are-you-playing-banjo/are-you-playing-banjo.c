#include <stdlib.h>
#include <stdio.h>
char *are_you_playing_banjo(const char *name) {
  char *answer;
  if(name[0] == 'r' || name[0] == 'R')
  {
    asprintf(&answer, "%s plays banjo", name);
  }
  else
  {
    asprintf(&answer, "%s does not play banjo", name);
  }
  return answer;
}
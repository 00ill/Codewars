#include <stdio.h>
int points(const char* const games[10]) {
  int x, y, answer = 0;
  for(int i = 0; i < 10; i++)
  {
    sscanf(games[i], "%d:%d", &x, &y);
    if(x > y) answer += 3;
    else if(x == y) answer++;
  }
  return answer;
}
#include <stdio.h>
long zeros(long n) {
  long answer = 0;
  for(long i = 5; n / i > 0; i *= 5)
  {
    answer += n / i;
  }
  return answer;
}
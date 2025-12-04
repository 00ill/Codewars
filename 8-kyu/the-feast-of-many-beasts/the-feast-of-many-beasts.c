#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
​
bool feast(const char* beast, const char* dish) {
  int len_1 = strlen(beast);
  int len_2 = strlen(dish);
  return (beast[0] == dish[0]) && (beast[len_1 - 1] == dish[len_2 - 1]);
}
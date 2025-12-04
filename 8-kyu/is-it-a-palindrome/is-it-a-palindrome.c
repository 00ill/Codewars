#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool is_palindrome(const char *str_in) {
    unsigned int len = strlen(str_in);
    for(unsigned int i = 0; i < (unsigned int)(len / 2); i++)
    {
      if(toupper(str_in[i]) != toupper(str_in[len - 1 - i])) return false;
    }
    return true;
}
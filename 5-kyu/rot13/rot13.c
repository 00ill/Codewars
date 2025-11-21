#include <string.h>
char *rot13(char *str_out, const char *str_in)
{
// write to str_out and return it
// it has enough room for strlen(str_in) + 1 bytes
    strcpy(str_out, str_in);
    unsigned int len = strlen(str_in);
    for(int i = 0; i < len; i++)
    {
      if('a' <= str_out[i] && str_out[i] <= 'z')
      {
        if(str_out[i] <= 'm') str_out[i] += 13;
        else str_out[i] -= 13;
      }
      else if('A' <= str_out[i] && str_out[i] <= 'Z')
      {
        if(str_out[i] <= 'M') str_out[i] += 13;
        else str_out[i] -= 13;
      }
    }
    
    return str_out;
}
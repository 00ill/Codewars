#include <string.h>
/* remember to null-terminate outp! */
​
char *get_middle(char outp[3], const char *inp)
{
    size_t len = strlen(inp);
    if(len & 1)
    {
      outp[0] = inp[len / 2];
      outp[1] = '\0';
    }
    else
    {
      outp[0] = inp[(len / 2) - 1];
      outp[1] = inp[len / 2];
      outp[2] = '\0';
    }
    return outp;
}
​
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
​
static void reverse_range(char *s, size_t l, size_t r)
{
    while (l < r)
    {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        ++l;
        --r;
    }
}
​
char *reverseWords(const char *text)
{
    size_t n = strlen(text);
    char *out = (char *)malloc(n + 1);
    if (!out)
    {
        return NULL;
    }
    memcpy(out, text, n + 1);
    size_t i = 0;
    while (i < n)
    {
        if (out[i] == ' ')
        {
            ++i;
            continue;
        }
        size_t start = i;
        while (i < n && out[i] != ' ')
        {
            ++i;
        }
​
        size_t end = i ? i - 1 : 0;
        reverse_range(out, start, end);
    }
​
    return out;
}
​
​
#include <string.h>
​
char *remove_char(char *dst, const char *src)
{
    size_t n = strlen(src);
    if (n <= 2)
    {
        dst[0] = '\0';
        return dst;
    }
    memcpy(dst, src + 1, n - 2);
    dst[n - 2] = '\0';
    return dst;
}
​
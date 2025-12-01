​
#include <stdbool.h>
#include <string.h>
​
bool solution(const char *str, const char *ending)
{
    size_t len_str = strlen(str);
    size_t len_end = strlen(ending);
​
    if (len_end > len_str)
        return false;
​
    return strcmp(str + len_str - len_end, ending) == 0;
}
​
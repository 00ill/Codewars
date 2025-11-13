#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
​
int compare(const void *a, const void *b)
{
    char c1 = *(const char *)a;
    char c2 = *(const char *)b;
    return c2 - c1;
}
​
uint64_t descendingOrder(uint64_t n)
{
    char str[32];
    sprintf(str, "%" PRIu64, n);
​
    int len = strlen(str);
    qsort(str, len, sizeof(char), compare);
​
    uint64_t answer = strtoull(str, NULL, 10);
    return answer;
}
​
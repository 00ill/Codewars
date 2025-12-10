​
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
​
char *order_words(char *ordered, const char *words)
{
    ordered[0] = '\0';
    if (words == NULL || words[0] == '\0')
    {
        return ordered;
    }
​
    size_t len = strlen(words);
    int count = 0;
    {
        size_t i = 0;
        while (i < len)
        {
            while (i < len && words[i] == ' ')
            {
                i++;
            }
​
            if (i >= len)
            {
                break;
            }
            count++;
            while (i < len && words[i] != ' ')
            {
                i++;
            }
        }
    }
​
    if (count == 0)
    {
        return ordered;
    }
​
    char **items = (char **)malloc(sizeof(char *) * count);
    int  *pos    = (int  *)malloc(sizeof(int) * count);
​
    if (items == NULL || pos == NULL)
    {
        if (items) free(items);
        if (pos)   free(pos);
        return ordered;
    }
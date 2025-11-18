#include <ctype.h>
#include <string.h>
#include <stdlib.h>
​
void to_camel_case(const char *text, char *camel)
{
    int len = strlen(text);
    char *TEXT = (char*)malloc(len + 1);
    strcpy(TEXT, text);
​
    for (int i = 0; i < len; i++)
    {
        if (TEXT[i] == '-') TEXT[i] = '_';
    }
​
    char *delim = "_";
    char *ptr = strtok(TEXT, delim);
​
    camel[0] = '\0';
    if (ptr != NULL)
    {
        strcat(camel, ptr);
    }
​
    while ((ptr = strtok(NULL, delim)) != NULL)
    {
        ptr[0] = toupper(ptr[0]);
        strcat(camel, ptr);
    }
​
    free(TEXT);
}
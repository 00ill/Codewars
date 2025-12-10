#define COUNTS_SIZE 128
#include <string.h>
//  assign char counts to the provided pre-allocated array
//  pre-existing values in array aren't guaranteed to be 0
//  from test string: "aaa", counts['a'] should be == to 3
​
void count(const char *string, unsigned counts[COUNTS_SIZE]) {
    unsigned int len = strlen(string);
    for(int i = 0; i < COUNTS_SIZE; i++) counts[i] = 0;
    for(int i = 0; i < len; i++)
    {
      counts[string[i]]++;
    }
}
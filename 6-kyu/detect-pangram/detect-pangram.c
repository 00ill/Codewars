#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
bool is_pangram(const char *str_in) {
    int arr[26] = {0};
    int len = strlen(str_in);
    char *temp = (char*)malloc(sizeof(char) * (len + 1));
    strcpy(temp, str_in);
    for(int i = 0; i < len; i++)
    {
      temp[i] = toupper(temp[i]);
      if('A' <= temp[i] && temp[i] <= 'Z')
      {
        arr[temp[i] - 'A']++;
      }
    }
    for(int i = 0; i < 26; i++)
    {
      if(arr[i] == 0) return false;
    }
    return true;
}
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
bool is_anagram(const char *s1, const char *s2)
{
  int array[26] = {0,};
  int array2[26] = {0,};
  unsigned int len = strlen(s1);
  if(len != strlen(s2)) return false;
  
  char *S1 = (char*)malloc(sizeof(char) * (len + 1));
  char *S2 = (char*)malloc(sizeof(char) * (len + 1));
  strcpy(S1, s1);
  strcpy(S2, s2);
  for(unsigned int i = 0; i < len; i++)
  {
    S1[i] = toupper(S1[i]);
    S2[i] = toupper(S2[i]);
  }
  
  for(unsigned int i = 0; i < len; i++)
  {
    array[S1[i] - 'A']++;
    array2[S2[i] - 'A']++;
  }
  
  for(int i = 0; i < 26; i++)
  {
    if(array[i] != array2[i] ) return false;
  }
  return true;
}
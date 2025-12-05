#include <stdlib.h>
void sort_by_length (const char *strings[])
{
  int count = 0;
  while (strings[count] != NULL)    
  {
      count++;
  }
​
  for(int i = 0; i < count - 1; i++)
  {
    for(int j = i + 1; j < count; j++)
    {
      if(strlen(strings[i]) > strlen(strings[j]))
      {
        char *p = strings[i];
        strings[i] = strings[j];
        strings[j] = p;
      }
    }
  }
}
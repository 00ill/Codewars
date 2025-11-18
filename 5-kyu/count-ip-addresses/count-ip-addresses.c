#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
uint32_t ips_between (const char *start, const char *end)
{
  
  char *delim = ".";
  unsigned int array[4] = {0};
  int len = strlen(start);
  
  char *START = (char*)malloc(sizeof(char) * (len + 1));
  char *END = (char*)malloc(sizeof(char) * (len + 1));;
  strcpy(START, start);
  strcpy(END, end);
  
  char *ptr = strtok(START, delim);
  array[0] = atoi(ptr);
  for(int i = 0; i < 3; i++)
  {
    ptr = strtok(NULL, delim);
    array[i + 1] = atoi(ptr);
  }
  
  ptr = strtok(END, delim);
  array[0] -= atoi(ptr);
  for(int i = 0; i < 3; i++)
  {
    ptr = strtok(NULL, delim);
    array[i + 1] -= atoi(ptr);
    
  }
  uint32_t answer = 0;
  
  answer += (-array[0] * 256 * 256 * 256) + (-array[1] * 256 * 256) + (-array[2] * 256) + (-array[3]);
  
  return answer;
}
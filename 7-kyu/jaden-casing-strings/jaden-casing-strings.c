#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char *to_jaden_case (char *jaden_case, const char *string)
{
  *jaden_case = '\0';
  char *temp = calloc(strlen(string) + 1, sizeof(char));
  strcpy(temp, string);
  char *token = strtok(temp, " ");
  if(!token) return jaden_case;
  while(1)
  {
    token[0] = toupper(token[0]);
    strcat(jaden_case, token);
    token = strtok(NULL, " ");
    if(token == NULL) break;
    strcat(jaden_case, " ");
  }
  return jaden_case;
}
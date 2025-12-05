#include <stdlib.h>
char *get_initials (const char *full_name, char initials[4])
{
  char *temp = calloc(strlen(full_name) + 1, 1);
  strcpy(temp, full_name);
  char *token = strtok(temp, " ");
  initials[0] = toupper(token[0]);
  initials[1] = '.';
  token = strtok(NULL, " ");
  initials[2] = toupper(token[0]);
  initials[3] = '\0'; 
  return initials;
}
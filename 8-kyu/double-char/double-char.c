char *double_char (const char *string, char *doubled)
{
  *doubled = '\0'; // write to doubled
  unsigned int len = strlen(string);
  char temp[2];
  for(unsigned int i = 0; i < len; i++)
  {
    temp[0] = string[i];
    temp[1] = '\0';
    strcat(doubled, temp);
    strcat(doubled, temp);
  }
  return doubled; // return it
}
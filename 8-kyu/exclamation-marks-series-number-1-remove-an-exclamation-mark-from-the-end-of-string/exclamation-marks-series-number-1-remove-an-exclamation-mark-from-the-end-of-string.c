char *remove_mark (char *string)
{
  if(strlen(string) == 0) return string;
  if(string[strlen(string) - 1] == '!') string[strlen(string) - 1] = '\0';
  return string;
}
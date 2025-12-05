char *get_initials (const char *full_name, char initials[4])
{
  char *buffer1 = calloc(strlen(full_name) + 1, 1);
  char *buffer2 = calloc(strlen(full_name) + 1, 1);
  sscanf(full_name, "%s %s", buffer1, buffer2);
  initials[0] = toupper(buffer1[0]);
  initials[1] = '.';
  initials[2] = toupper(buffer2[0]);
  initials[3] = '\0';
  return initials; // return it
}
char *name_shuffler (char *shuffled, const char *name)
{
  char buffer_1[256], buffer_2[256];
  sscanf(name, "%s %s", &buffer_1, &buffer_2);
  *shuffled = '\0';
  strcat(shuffled, buffer_2);
  strcat(shuffled, " ");
  strcat(shuffled, buffer_1);
  return shuffled;
}
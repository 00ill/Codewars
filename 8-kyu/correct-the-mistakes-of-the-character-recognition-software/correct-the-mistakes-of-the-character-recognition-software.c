char *correct(char *string) {
    unsigned int len = strlen(string);
    for(unsigned int i = 0; i < len; i++)
    {
      if(string[i] == '5') string[i] = 'S';
      if(string[i] == '0') string[i] = 'O';
      if(string[i] == '1') string[i] = 'I';
    }
    return string;
}
// Write resulting string into buffer pointed by `str_out`
// It has enough room for `strlen(str_in) + 1` bytes
void remove_exclamation_marks(const char *str_in, char *str_out) {
    *str_out = '\0';
    int i = 0, j = 0;
    while(str_in[i] != '\0')
    {
      if(str_in[i] != '!')
      {
        str_out[j] = str_in[i];
        j++;
      }
      i++;
    }
    str_out[j] = '\0';
}
​
void fakeBin(const char *digits, char *binary) {
  // Please place result in the memory pointed to by
  // the binary parameter. binary has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
  while(*digits)
  {
    if(*digits - '0' >= 5) *binary = '1';
    else *binary = '0';
    digits++;
    binary++;
  }
  *binary = '\0';
}
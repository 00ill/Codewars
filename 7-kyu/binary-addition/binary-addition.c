char *binary_add (unsigned a, unsigned b, char *binary)
{
  unsigned long long sum = (unsigned long long)a + (unsigned long long)b;
  if(!sum) {binary[0] = '0'; binary[1] = '\0'; return binary;}
  char temp[32768] = "";
  binary[0] = '\0';
  while(sum)
  {
    sprintf(temp, "%c%s", (char)((sum & 1) + '0'), binary);
    strcpy(binary, temp);
    sum >>= 1;
  }
  return binary;
}
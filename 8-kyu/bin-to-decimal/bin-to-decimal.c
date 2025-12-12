unsigned bin_to_decimal(const char *bin)
{
  unsigned answer = 0, x = 1;
  unsigned len = strlen(bin);
  for(int i = 0; i < len; i++)
  {
    answer += x * (bin[len - 1 - i] & 1);
    x *= 2;
  }
  return answer;
}
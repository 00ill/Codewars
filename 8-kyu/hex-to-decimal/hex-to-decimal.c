int hex_to_dec(const char *source)
{
  int answer;
  sscanf(source, "%x", &answer);
  return answer;
}
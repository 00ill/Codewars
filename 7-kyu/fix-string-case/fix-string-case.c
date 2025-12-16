// return a dynamically allocated string
// (to be freed by the testing function)
​
char *solve(const char *str) {
    unsigned int len = strlen(str), l = 0, h = 0;
    for(unsigned int i = 0; i < len; i++)
    {
      if(tolower(str[i]) == str[i]) l++;
      else h++;
    }
    char *answer = calloc(len + 1, 1);
    for(unsigned int i = 0; i < len; i++)
    {
      if(h <= l)
      {
        answer[i] = tolower(str[i]);
      }
      else
      {
        answer[i] = toupper(str[i]);
      }
    }
    return answer;
}
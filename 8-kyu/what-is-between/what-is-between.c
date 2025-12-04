void between(int a, int b, int *integers) {
  for(int i = a; i <= b; i++)
  {
    integers[i - a] = i;
  }
}
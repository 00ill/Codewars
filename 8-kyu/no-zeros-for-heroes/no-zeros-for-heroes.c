int no_boring_zeros(int n) {
  if(n == 0) return 0;
  while(n % 10 == 0)
  {
    n /= 10;
  }
  return n;
}
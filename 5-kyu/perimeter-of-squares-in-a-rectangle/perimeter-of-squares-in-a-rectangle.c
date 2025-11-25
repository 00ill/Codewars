typedef unsigned long long ull;
​
ull fibo(ull n)
{
  ull a = 0;
  ull b = 1;
  for(int i = 0; i < n; i++)
  {
    ull next = a + b;
    a = b;
    b = next;
  }
  return a;
}
​
ull perimeter(int n) {
  return (fibo(n + 3) - 1) * 4;
}
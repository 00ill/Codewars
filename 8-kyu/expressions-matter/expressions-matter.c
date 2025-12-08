int expression_matter(int a, int b, int c) {
  if(a != 1 && b != 1 && c != 1) return a * b * c;
  if(a == 1 && c == 1) return a + b + c;
  if(a == 1 && b != 1 && c != 1) return (a + b) * c;
  if(a != 1 && b != 1 && c == 1) return a * (b + c);
  if(b == 1) return a <= c ? (a + b) * c : a * (b + c);
}
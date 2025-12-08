double arithmetic(double a, double b, const char* operator) {
  if(operator[0] == 'a') return a + b;
  if(operator[0] == 's') return a - b;
  if(operator[0] == 'm') return a * b;
  if(operator[0] == 'd') return a / b;
}
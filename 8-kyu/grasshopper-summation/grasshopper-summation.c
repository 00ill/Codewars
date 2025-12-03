int summation(int number) {
  if(number == 0) return 0;
  return number + summation(number - 1);
}
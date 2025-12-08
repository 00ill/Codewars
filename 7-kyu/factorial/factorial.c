int factorial(int n) {
    if(n > 12 || n < 0) return -1;
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}
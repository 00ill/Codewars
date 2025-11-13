int sum_digits(int n) {
​
    //  <----  hajime!
    int answer = 0;
    if(n < 0) n *= -1;
    while(n > 0)
    {
      answer += n % 10;
      n /= 10;
    }
    return answer;
}
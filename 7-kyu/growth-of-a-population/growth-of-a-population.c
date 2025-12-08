int nbYear(int p0, double percent, int aug, int p) {
    int answer = 0;
    while(1)
    {
      p0 = p0 + p0 * percent/100 + aug;
      answer++;
      if(p0 >= p) return answer;
    }
    return 0;
}
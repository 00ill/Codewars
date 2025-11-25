int get_sum(int a , int b) {
    if(a == b) return a;
    int answer = 0;
    int small = a < b ? a : b;
    int big = a > b ? a : b;
    for(; small <= big; small++) answer += small;
    return answer;
}
int get_real_floor(int n)
{
    if(n <= 0) return n;
    if(n > 13) return n - 2;
    return n - 1;
}
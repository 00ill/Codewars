​
#define PEOPLE_MAX 100000
​
int josephus_survivor(int n, int k)
{
    if (n <= 0 || k <= 0 || n > PEOPLE_MAX)
    {
        return -1;
    }
​
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        res = (res + k) % i;
    }
​
    return res + 1;
}
​
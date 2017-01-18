#include<stdio.h>
typedef long long ll;
ll swaps(ll a,ll b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
long long int x, y, d;
void extendedEuclid(long long int a, long long int b)
{
    while(b)
    {
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendedEuclid(b, a % b);

    long long int x1, y1;
    x1 = y;
    y1 = x - a/b*y;
    x = x1;
    y = y1;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    long long int a, b;
    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(!a) swaps(&a,&b);
        printf("%lld %lld\n",a,b)
        extendedEuclid(a,b);
        printf("%lld %lld %lld\n", x, y, d);
    }
    return 0;
}

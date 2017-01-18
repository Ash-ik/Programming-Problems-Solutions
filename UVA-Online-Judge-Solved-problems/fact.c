#include<stdio.h>
long long fact(long long n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    long long x;
    while(scanf("%lld",&x))
    printf("%lld\n",fact(x));
}

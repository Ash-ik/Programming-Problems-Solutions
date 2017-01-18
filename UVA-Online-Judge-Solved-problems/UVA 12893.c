#include <stdio.h>
int count;
int ans(long long x)
{
    if(x==0) return count;
    if(x&1)
        count++;
    ans(x>>1);
}
int main()
{
    int i,cas;
    scanf("%d",&cas);
    while(cas--)
    {
        long long n;
        scanf("%lld",&n);
        count=0;
        printf("%d\n",ans(n));
    }
    return 0;
}


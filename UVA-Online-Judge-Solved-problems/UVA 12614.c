#include<stdio.h>
int main()
{
    long long t,i=1,max,n,a;
    scanf("%lld",&t);
    while(i<=t)
    {
        max=0;
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld",&a);
            if(a>max) max=a;
        }
        printf("Case %lld: %lld\n",i++,max);
    }
    return 0;
}

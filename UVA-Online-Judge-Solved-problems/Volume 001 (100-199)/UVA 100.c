#include<stdio.h>
long long count(long long n)
{
    long long ans=1;
    while(n!=1)
    {
        if(n&1)
        {
            n=(3*n+1)/2;
            ans+=2;
        }
        else
            {
                n/=2;
                ans++;
            }
    }
    return ans;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        long long i,max=0,mx,mn;
        if(a>b)
            mx=a,mn=b;
            else mx=b,mn=a;
        for(i=mn;i<=mx;i++)
        {
            long long z=count(i);
                if(z>max)
                    max=z;
        }
        printf("%lld %lld %lld\n",a,b,max);
    }
    return 0;
}

#include<stdio.h>
long long count(long long n)
{
    if(n==1)
        return 3;
    long long ans=0;
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
    while(scanf("%lld %lld",&a,&b)!=EOF &&!(a==0 &&b==0))
    {
        long long i,max=0,mx,mn,index;
        if(a>b)
            mx=a,mn=b;
        else
            mx=b,mn=a;
        for(i=mx;i>=mn;i--)
        {
            long long z=count(i);
                if(z>=max)
                    {index=i;max=z;}
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",mn,mx,index,max);
    }
    return 0;
}

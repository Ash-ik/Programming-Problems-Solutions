#include<stdio.h>
long long solve(long long n)
{
    long long ans=0;
    while (n)
    {
        int x=n%10;
        n/=10;
        ans+=(x*(x+1)/2)+n*45;
    }
    return ans;
}
int main()
{
    long long i,p,q;
    while(scanf("%lld %lld",&p,&q)==2 &&(p+q)>=0)
    {
        if(p==q)
            printf("%lld\n",solve(q));
            else
                printf("%lld\n",solve(q)-solve(p-1));
    }
    return 0;
}

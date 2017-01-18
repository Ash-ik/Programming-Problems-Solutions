#include<stdio.h>
typedef long long LL;
LL gcd(LL a,LL b)
{
if(b==0) return a;
return gcd(b,a%b);
}
LL lcm(LL a,LL b)
{
    return (a*b)/gcd(a,b);
}

int main()
{

    int i=1,t,n,x;
    LL ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&x);
        ans=x;
        n--;
        while(n--)
        {
            scanf("%d",&x);
            ans=lcm(ans,x);
        }
        printf("Case %d: %lld\n",i++,ans*35);
    }
    return 0;
}

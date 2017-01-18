#include<stdio.h>
#include<stdbool.h>
typedef long long ll;
bool bigMod(ll x,ll y,ll m)
{
    ll ans=1,tmp=x;
    while(y)
    {
        if(y&1)
            ans=(ans*tmp)%m;
        y>>=1;
        tmp=(tmp*tmp)%m;

    }
    return ans==x;
}
    int isPrime(int x)
    {
        int i;
        for(i=2; i*i<=x; i++)
            if(!(x%i))
                return 0;
        return 1;
    }

    int main()
    {
        ll p,a;
        while(scanf("%lld %lld",&p,&a) && !(!p && !a))
        {
            if(!isPrime(p) && bigMod(a,p,p)) puts("yes");
            else puts("no");
        }
        return 0;
    }

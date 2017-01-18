#include<bits/stdc++.h>
#define sc(x) scanf("%d",&x)
#define scc(x,y) scanf("%lld %lld",&x,&y)
#define sccc(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
typedef long long ll;
using namespace std;
ll mul(ll a,ll b,ll m)
{
    ll result=0;
    a%=m;
    while(b)
    {
        if(b%2) result=(result+a)%m;
        a=(a+a)%m;
        b/=2;
    }
    return result;
}
ll bigMod(ll a, ll b, ll m)
{
    ll result=1;
    a%=m;
    while(b)
    {
        if(b%2) result=mul(result,a,m);
        a=mul(a,a,m);
        b/=2;
    }
    return result;
}
int main()
{
    int t,cases=0;
    ll a,b,c;
    sc(t);
    while(t--)
    {
        sccc(a,b,c);
        printf("Case %d: %lld\n",++cases,bigMod(a,b,c));
    }
    return 0;
}

#include<bits/stdc++.h>
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
#define getchar_unlocked getchar
using namespace std;
typedef long long ll;

void scan_positive_int(ll *a)
{
        ll x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
            *a=x;
}

int main()
{
    ll x,top1,top2,t,n,i,ans;
    scan_positive_int(&t);
    while(t--)
    {
        ans=0;
        multiset<ll>data;
        scan_positive_int(&n);
        x=n;
        while(x--)
            scan_positive_int(&i),data.insert(i);
        i=n;
        while(--i)
        {
            top1=*data.begin();
            data.erase(data.begin());
            top2=*data.begin();
            data.erase(data.begin());

            ans=ans+top1+top2;
            data.insert(top1+top2);
        }
        printf("%lld\n",ans);
    }
    return 0;
}

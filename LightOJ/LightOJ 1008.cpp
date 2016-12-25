#include<stdio.h>
#include<math.h>
#define ll long long
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define printNumWithCases(x,y) printf("Case %d: %lld %lld\n",cases,x,y)
#define read freopen("dataN.txt","r",stdin)

int t,cases=1;
int main()
{
    ll n,s,x,y;
    sc(t);
    while(t--)
    {
        scl(s);
        n=ceil(sqrt((double)s));
        if(n*n-s<n)x=n,y=n*n-s+1;
        else x=-n*n+2*n+s-1,y=n;
        if(n&1)
        {
            x=x^y;
            y=x^y;
            x=x^y;
        }
        printNumWithCases(x,y);
        cases++;
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
#define ll long long
#define inp(x) scanf("%d",&x)
#define out(x) printf("%lld\n",x)
#define loop(p,q,r) for(p=q;p<r;p++)
#define read freopen("dataN.txt","r",stdin)

int main()
{
    int t,n,i,len;
    ll sum=0;
    inp(t);
    while(t--)
    {
        inp(n);
        len=n/2+1;
        loop(i,2,len)
            if(!(n%i)) sum+=i;
        out(sum);
    }
    return 0;
}

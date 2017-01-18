#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    freopen("dataN.txt","r",stdin);
    long long p,q,x,y,n;
    while(scanf("%lld %lld",&p,&q)==2 && !(p==0 && q==0))
    {
        scanf("%lld",&n);
        x=ceil((p+sqrt(p*p-4*q))/2);
        y=ceil((p-sqrt(p*p-4*q))/2);
        x=pow(x,n);
        y=pow(y,n);
        printf("%lld\n",x+y);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    long long p,t,d,i,res;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&p);
        res=0,d=sqrt(p);
         for(i=1;i<=d;i++)
                res=(res+p/i);
            res=2*res-d*d;
    printf("%lld\n",res);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long i,t,p,q,ans=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&p,&q);
        for(i=q;i>(q-p);i--)
            ans=ans*i;
        printf("%lld\n",ans-1);
    }
}

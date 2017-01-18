#include<stdio.h>
#include<math.h>
int main()
{
    long long i=1,t,p,pos,n,ans[10000];
    scanf("%lld",&t);
    while(i<=t)
    {
        scanf("%lld",&n);
        pos=0;
        for(p=2;p<sqrt(n),pos<2;p++)
        if(n%p==0)
        ans[pos++]=p;
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i++,n,ans[0],n/ans[0],ans[1],n/ans[1]);
    }
    return 0;
}

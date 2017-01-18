#include<stdio.h>
#include<math.h>
int main()
{
    long long a[10000],j,ans,n,p=1,t,i,flag;
    for(j=1;j<=100;j++)
    {
        ans=1;
        for(i=1;i<=j-2;i++)
        ans=(ans*j)%2000000011;
        a[j]=ans;
    }
    scanf("%lld",&t);
    while(p<=t)
    {
        scanf("%lld",&n);
        printf("Case #%lld: %lld\n",p++,a[n]);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long t;
    scanf("%llu",&t);
    while(t--)
    {
        unsigned long long i,ans=1,n;
        scanf("%llu",&n);
        for(i=1;i<=n;i++)
            ans=ans*(n%10);
            ans%=10;
        printf("%llu\n",ans);
    }
    return 0;
}

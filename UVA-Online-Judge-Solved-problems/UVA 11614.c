#include<stdio.h>
#include<math.h>
int main()
{
    long long t,n,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=(-1+sqrt(1+8*n))/2;
        printf("%lld\n",ans);
    }
    return 0;
}

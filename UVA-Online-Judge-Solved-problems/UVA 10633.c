#include<stdio.h>
int main()
{
    unsigned long long ans,n,ans2;
    while(scanf("%llu",&n)==1 &&n)
    {
        ans=(n*10)/9;
        ans2=((ans-1)-(ans-1)/10);
        if(ans2==n)
        printf("%llu %llu\n",ans-1,ans);
        else printf("%llu\n",ans);
    }
    return 0;
}

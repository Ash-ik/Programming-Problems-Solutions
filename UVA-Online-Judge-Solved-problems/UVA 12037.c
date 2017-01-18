#include<stdio.h>
int main()
{
    int testCase,cases=0;
    scanf("%d",&testCase);
    while(testCase--)
    {
        long long ans=1,a,b,i;
        scanf("%lld %lld",&a,&b);
        for(i=b;i>(b-a);i--)
            ans=(ans*i)%34830;
        printf("Case %d: %lld\n",++cases,ans);
    }
    return 0;
}

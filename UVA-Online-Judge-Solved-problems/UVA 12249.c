#include<stdio.h>
#include<string.h>
int main()
{
    long long ans,n,temp,i=1,t;
    scanf("%lld",&t);
    while(i<=t)
    {
        ans=0;
        scanf("%lld %lld",&n,&temp);
        while(temp<n &&++ans)
            temp=temp*2+1;
            if(ans%2==0)
        printf("Case %lld: First Player\n",i++);
        else printf("Case %lld: Second Player\n",i++);
    }
    return 0;
}


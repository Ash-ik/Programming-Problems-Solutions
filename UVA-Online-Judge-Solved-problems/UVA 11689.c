#include<stdio.h>
int main()
{
    int n,ans,temp,s,r,e;
    while(scanf("%d",&n)==1)
    {
        while(n--)
    {
        scanf("%d %d %d",&s,&e,&r);
        temp=s+e;
        ans=0;
        while(temp/r)
        {
             ans+=temp/r;
            temp=(temp/r)+(temp%r);
        }
        printf("%d\n",ans);
    }
    }
    return 0;
}

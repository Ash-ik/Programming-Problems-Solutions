#include<stdio.h>
#include<math.h>
int main()
{
    int n,ans,s,r,e;
    while(scanf("%d",&n)==1)
    {
        while(n--)
    {
        scanf("%d %d %d",&s,&e,&r);
        ans=floor((((s+e)*r)-1)/(r-1))-(s+e);
        printf("%d\n",ans);
    }
    }
    return 0;
}

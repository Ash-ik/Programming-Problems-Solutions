#include<stdio.h>
int main()
{
    int t,ans,x;
    while(scanf("%d",&t)!=EOF &&t)
    {
        ans=0;
        while(t--)
        {
            scanf("%d",&x);
            ans^=x;
        }
                if(ans)
                printf("Yes\n");
            else printf("No\n");
    }
    return 0;
}

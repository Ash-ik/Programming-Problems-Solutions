#include<stdio.h>
#include<math.h>
int main()
{
    int t,r,c,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&r,&c);
        ans=ceil((r-2+0.0)/3)*ceil((c-2+0.0)/3);
        printf("%d\n",ans);
    }
    return 0;
}

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int testcase,count=0;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int router,location;
        printf("Case %d:\n",++count);
        scanf("%d %d",&router,&location);
        int i,routerX[102],routerY[102],routerR[102];
        for(i=1;i<=router;i++)
                scanf("%d %d %d",&routerX[i],&routerY[i],&routerR[i]);
                int j;
            for(j=1;j<=location;j++)
            {
                int flag=0,locationX,locationY;
                scanf("%d %d",&locationX,&locationY);
                for(i=1;i<=router;i++)
                    if(((locationX>=routerX[i] && locationX<=routerX[i]+routerR[i] && locationY>=routerY[i] && locationY<=routerY[i]+routerR[i])|| (locationX<=routerX[i] && locationX>=routerX[i]-routerR[i] && locationY<=routerY[i] && locationY>=routerY[i]-routerR[i])))
                    flag=1;
                if(flag)
                printf("Yes\n");
                else printf("No\n");
            }
    }
    return 0;
}


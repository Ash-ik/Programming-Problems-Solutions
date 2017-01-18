#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int sqr(int a)
{
    return a*a;
}
int main()
{
    int testcase,count=0;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int router,location;
        printf("Case %d:\n",++count);
        scanf("%d %d",&router,&location);
        int i,routerX[router+1],routerY[router+1],routerR[router+1];
        for(i=1;i<=router;i++)
                scanf("%d %d %d",&routerX[i],&routerY[i],&routerR[i]);
                int j;
            for(j=1;j<=location;j++)
            {
                int locationX,locationY;
                bool flag=false;
                scanf("%d %d",&locationX,&locationY);
                for(i=1;i<=router;i++)
                    if((double)sqrt(sqr(routerX[i]-locationX)+sqr(routerY[i]-locationY)) <= (double)routerR[i] )
                    {
                        flag=true;
                        break;
                    }
                if(flag)
                printf("Yes\n");
                else printf("No\n");
            }
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(y%x)
            printf("-1\n");
        else printf("%d %d\n",x,y);
    }
    return 0;
}

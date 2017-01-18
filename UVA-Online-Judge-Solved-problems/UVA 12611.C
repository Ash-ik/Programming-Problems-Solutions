#include<stdio.h>
int main()
{
    int t,i=1,r,wl,l,wr;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d",&r);
        wl=(9*r)/4;
        wr=(11*r)/4;
        l=(3*r)/2;
        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",i,wl,l,wr,l,wr,l,wl,l);
        i++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,m,n,r,c;
    char *h="Hansel",*g="Gretel";
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&m,&n,&r,&c);
        if(!((m-r-1)^(n-c-1)^r^c)) puts(h);
        else puts(g);
    }
    return 0;
}

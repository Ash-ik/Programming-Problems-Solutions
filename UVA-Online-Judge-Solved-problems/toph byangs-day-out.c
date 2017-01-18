#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y>=z && x+z>=y &&y+z>=x) puts("Yes");
        else puts("No");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(y>0)
        printf("%d\n",((2*x*z-y*z)/(x+y)));
        else
        printf("%d\n",z);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,t,i,x=0;
    while(scanf("%d",&t) &&t!=0)
    {
        i=0,b=0;
        while(t--)
        {
            scanf("%d",&a);
            if(a==0) b++;
            else i++;
        }
        printf("Case %d: %d\n",++x,(i-b));
    }
    return 0;
}

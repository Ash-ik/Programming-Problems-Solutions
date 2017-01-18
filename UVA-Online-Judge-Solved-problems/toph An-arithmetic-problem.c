#include<stdio.h>
int main()
{
    int t,cases=0,x,y,z,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&x,&y,&z,&n);
        printf("Case %d: ",++cases);
        if(y-x != z-y) puts("Error");
        else
            printf("%d\n",z+(n-3)*(z-y));
    }

    return 0;
}

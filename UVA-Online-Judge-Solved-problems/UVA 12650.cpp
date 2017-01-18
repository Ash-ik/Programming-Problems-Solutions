#include<stdio.h>
int main()
{
    int j,b,c,d,r,s,i;
    while(scanf("%d %d",&s,&r)==2)
    {
        int a[10001]={};
        for(i=1;i<=r;i++)
           {
             scanf("%d",&b);
             ++a[b];
           }
           if(r==s)
           {
                printf("*\n");
                continue;
           }
        for(j=1;j<=s;j++)
            {
                if(!a[j])
                    printf("%d ",j);
            }
            printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,t,n,x,mini;
    char y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n+1];
        mini=1002;
        for(i=0;i<n;i++)
        {
            int temp=1;
            while(scanf("%d%c",&x,&y) &&y!='\n') temp++;
            if(temp<mini)
                mini=temp;
            a[i]=temp;
        }

        for(i=0;i<n;i++)
            {
                if(a[i]==mini)
                    {printf("%d",i+1);break;}
            }
            i++;
        for(;i<n;i++)
            {
                if(a[i]==mini)
                    printf(" %d",i+1);
            }
            printf("\n");
    }
    return 0;
}


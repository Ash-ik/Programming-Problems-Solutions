#include<stdio.h>
#include<string.h>
int main()
{
    int t,sum,don;
    char a[100];
    scanf("%d",&t);
    sum=0;
    while(t--)
    {
        scanf("%s",a);
        if(!strcmp(a,"report"))
            printf("%d\n",sum);
        else
        {
            scanf("%d",&don);
            sum=sum+don;
        }
    }
    return 0;
}

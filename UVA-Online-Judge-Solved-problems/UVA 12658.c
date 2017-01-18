#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int x=0,i,t;
    scanf("%d",&t);
        scanf("%*s%*s%*s%s%*s",a);
        for(i=0,x=0;i<t;i++,x+=4)
        {
            if(a[x+1]=='*') printf("1");
            else if(a[x]=='*') printf("2");
            else printf("3");
        }
        printf("\n");
    return 0;
}

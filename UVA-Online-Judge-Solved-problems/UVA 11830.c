#include<stdio.h>
#include<string.h>
char a[10000],ans[10000];
int main()
{
    long int i,x,b,flag;
    while(gets(a) && strcmp(a,"0 0"))
    {
        x=0;
        flag=0;
        b=strlen(a);
        for(i=2;i<b;i++)
        {
            if((a[i]==a[0])||(a[i]=='0' &&flag==0))
                continue;
            printf("%c",a[i]) ;
            flag=1;
        }
        if(flag==0)
        printf("0");
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int x,i,p;
    char a[1000];
    while(scanf("%s",a)==1)
    {
        x=0;
        for(i=0,p=strlen(a)-1;i<strlen(a);i++,p--) if(a[i]=='1') x+=1<<p;
        printf("%d\n",x);
    }
    return 0;
}

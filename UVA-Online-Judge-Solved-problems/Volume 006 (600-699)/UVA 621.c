#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10000];
    char *c1="+",*c2="-",*c3="*",*c4="?";
    int t,n,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        p=strlen(a);
        if(a[p-1]=='5' &&a[p-2]=='3') puts(c2);
        else if(a[0]=='9' &&a[p-1]=='4') puts(c3);
        else if(a[0]=='1' &&a[1]=='9' &&a[2]=='0') puts(c4);
        else if((a[0]=='1' ||a[0]=='4'||(a[0]=='7'&&a[1]=='8'))&& p<=2)
        puts(c1);
    }
    return 0;
}

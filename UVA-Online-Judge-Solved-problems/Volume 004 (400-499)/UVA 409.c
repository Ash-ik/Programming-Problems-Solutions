#include<stdio.h>
#include<stdbool.h>
#include<string.h>
char a[100000];
int main()
{
    freopen("dataN.txt","r",stdin);
    int i,z=0;
    while(scanf("%s",a)!=EOF)
    {
        if(z!=0)
            printf(" ");
        if(a[0]=='a' ||a[0]=='e' ||a[0]=='i'||a[0]=='o'||a[0]=='u'||a[0]=='A'||a[0]=='E'||a[0]=='I'||a[0]=='O'||a[0]=='u')
        printf("%say",a);
        else
            {
                i=0;
                while(a[++i]!='\0') printf("%c",a[i]);
        printf("%cay",a[0]);
        z++;
            }
    }
    return 0;
}

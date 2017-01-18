#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,x=2,b,p,q;
    char n[105];
    while(scanf("%d",&a)==1 && a!=0)
    {
        scanf("%s",&n);
        b=strlen(n);
        i=b/a;
        for(p=i-1;p<b;p=p+i)
        {
            for(q=p;q>p-i;q--)
            printf("%c",n[q]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int t,i=1,n,d,p;
    scanf("%d",&t);
    while(i<=t)
    {
        printf("Case %d:\n",i);
        scanf("%d",&n);
        getchar();
        while(n--)
        {
            gets(a);
            d=strlen(a);
            a[d]='\0';
            for(p=0;p<d;p++)
            if(a[p]!=a[p+1]||(a[p]>='a' &&a[p]<='z') ||(a[p]>='A' &&a[p]<='Z'))
            printf("%c",a[p]);
            printf("\n");
        }
        if(i<t)printf("\n");
        i++;
    }
    return 0;
}

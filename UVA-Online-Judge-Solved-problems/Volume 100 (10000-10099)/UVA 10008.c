#include<stdio.h>
#include<string.h>
char a[100010];
int main()
{
    int t,max=0,ltr[257]={},i,j;
    scanf("%d\n",&t);
    while(t--)
    {
        gets(a);
        for(i=0;a[i];i++)
            {
                if(a[i]>='a' && a[i]<='z')
                    a[i]-=32;
                if(++ltr[a[i]]>max)
                max=ltr[a[i]];
            }
    }
    for(j=max;j>0;j--)
            for(i='A';i<='Z';i++)
                if(ltr[i]==j)
                    printf("%c %d\n",i,j);
    return 0;
}


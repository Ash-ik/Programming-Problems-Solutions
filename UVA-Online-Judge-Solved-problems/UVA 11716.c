#include<stdio.h>
#include<string.h>
#include<math.h>
char a[10000][10000],b[10000];
int main()
{
    int t,p,d,s,i,j;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(b);
        s=strlen(b);
        p=sqrt(s);
        if(p*p!=s)
        puts("INVALID");
        else
        {
            d=0;
            for(i=0;i<p;i++)
            for(j=0;j<p;j++)
            a[i][j]=b[d++];
            for(i=0;i<p;i++)
            for(j=0;j<p;j++)
            printf("%c",a[j][i]);
            printf("\n");
        }
    }
    return 0;
}

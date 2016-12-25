#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int b,c,d,i,j,k;
    while(gets(a))
    {
        b=-1;
        c=strlen(a);
        for(i=0;i<c;i++)
        {
            if(a[i]==' ')
            {
                for(j=i-1;j>b;j--)
                printf("%c",a[j]);
                printf(" ");
                b=i;
            }
        }
        for(k=c-1;k>b;k--)
        printf("%c",a[k]);
        printf("\n");
    }
    return 0;
}

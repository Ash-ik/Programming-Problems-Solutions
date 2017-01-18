#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int x,i;
        while(scanf("%s",a)!=EOF)
        {
            x=strlen(a);
            for(i=0;i<x;i++)
            {
                if(a[i]>='A' &&a[i]<='C')
                printf("2");
                else if(a[i]>='D' &&a[i]<='F')
                printf("3");
                else if(a[i]>='G' &&a[i]<='I')
                printf("4");
                else if(a[i]>='J' &&a[i]<='L')
                printf("5");
                else if(a[i]>='M' &&a[i]<='O')
                printf("6");
                else if(a[i]>='P' &&a[i]<='S')
                printf("7");
                else if(a[i]>='T' &&a[i]<='V')
                printf("8");
                else if(a[i]>='W' &&a[i]<='Z')
                printf("9");
                else if(a[i]=='-' || a[i]=='1' || a[i]=='0')
                printf("%c",a[i]);
            }
            printf("\n");
        }
        return 0;
}

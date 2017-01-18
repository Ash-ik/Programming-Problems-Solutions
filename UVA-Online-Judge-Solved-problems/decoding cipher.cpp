#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    while(gets(a))
    {
        for(int i=0;i<strlen(a);i++)
            printf("%c",(a[i]-'0'-3)%26+'0'-1);
    }
    printf("\n");
}

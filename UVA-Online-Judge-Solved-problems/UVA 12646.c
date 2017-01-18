#include<stdio.h>
#include<string.h>
char a[10000];
int main()
{
    while(gets(a))
    {
        if(!strcmp(a,"1 1 0") || !strcmp(a,"0 0 1"))
            printf("C\n");
        else if(!strcmp(a,"1 0 0") || !strcmp(a,"0 1 1"))
            printf("A\n");
        else if(!strcmp(a,"1 0 1") || !strcmp(a,"0 1 0"))
            printf("B\n");
        else printf("*\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int x=0;
    while(++x)
    {
        gets(str);
        if(!strcmp(str,"ash"))
        {
            printf("logging in......\n");
            break;
        }
        if(x==3)
    {
        printf("Error...try again\n");
        return main();
    }
    }
    printf("toot...toot..\n");
}

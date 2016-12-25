#include<stdio.h>
#include<string.h>
int ans(char *x)
{
    if(!strcmp(x,"negative"))
        return -1;
    if(!strcmp(x,"zero"))
        return 0;
        if(!strcmp(x,"one"))
        return 1;
        if(!strcmp(x,"two"))
        return 2;
        if(!strcmp(x,"three"))
        return 3;
        if(!strcmp(x,"four"))
        return 4;
        if(!strcmp(x,"five"))
        return 5;
        if(!strcmp(x,"six"))
        return 6;
        if(!strcmp(x,"seven"))
        return 7;
        if(!strcmp(x,"eight"))
        return 8;
        if(!strcmp(x,"nine"))
        return 9;
        if(!strcmp(x,"ten"))
        return 10;
}
int main()
{
    while(gets(a))
    {
        char *p;
        for(p=strtok(a," ");p;p=strtok(NULL," "))
        {
            sum=sum*10+ans(p);
        }
    }
}

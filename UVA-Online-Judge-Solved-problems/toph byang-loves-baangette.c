#include<stdio.h>
#include<string.h>
int main()
{
    char in[25],*ans1="Byangette",*ans2="Byang";
    while(gets(in))
    {
        if(strlen(in)==16) puts(ans1);
        else puts(ans2);
    }
    return 0;
}

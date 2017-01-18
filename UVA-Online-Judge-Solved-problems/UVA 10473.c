#include<stdio.h>
#include<stdlib.h>
int main()
{
    char n[100000];
    char *p;
    long long a;
    while(scanf("%s",&n)==1)
    {
    if(atoi(n)<0) break;
    if(n[0]=='0' && n[1]=='x')
    {
        a=strtol(n,&p,16);
        printf("%lld\n",a);
    }
    else
    printf("0x%X\n",atoi(n));
    }
    return 0;
}

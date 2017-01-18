#include<stdio.h>
int main()
{
    unsigned long long int o=1,a,b;
    while(scanf("%llu %llu",&a,&b)!=EOF)
        if(a <o<<(b+1)) puts("yes");
        else puts("no");
    return 0;
}

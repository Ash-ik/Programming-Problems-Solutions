#include<stdio.h>
#include<stdlib.h>
#define read freopen("dataN.txt","r",stdin)
int main()
{
    long long n;
    char in[20];
    gets(in);
    while(gets(in))
    {
        n=atoll(in);
        printf("%lld\n",n*(n-1)*(n-2)*(n-3)/24+n*(n-1)/2+1);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    unsigned long long i,n;
    while(scanf("%llu",&n)==1 &&n>=0)
        printf("%llu\n",((n*(n+1))/2)+1);
        return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    long long n,temp;
    while(scanf("%lld",&n) &&n)
    {
        temp=1;
        while(temp<n)
            temp=temp*2+1;
        puts(temp==n?"Bob":"Alice");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#define max 10000
int main()
{
    long long i,prime[10000],j;
    for(i=0;i<max;i++)
        prime[i]=0;
    for(i=2,j=i;j*i<max;j++,i++)
        if(prime[i])
    prime[j*i]=0;
    for(i=0;i<10;i++)
        printf("%lld\n",prime[i]);
}

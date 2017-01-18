#include<stdio.h>
int main()
{
    long int x,n,t[100000];
    while(scanf("%lld",&n)==1 &&n>=0)
    {
        if(n==0)
        printf("0\n");
        else
        {
            x=0;
        while(n!=0)
        {
            t[x++]=n%3;
            n=n/3;
        }
        while(x--)
        printf("%lld",t[x]);
        printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#define max 9876543210
int chck(long long a)
{
    int i,n[10]={};
    while(a)
    {
        if(++n[a%10]>1)
            return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long z,n;
        scanf("%lld",&n);
        for(z=1;z*n<=max;z++)
        {
            long long d=z*n;
            if(chck(z) && chck(d))
                printf("%lld / %lld = %lld\n",d,z,n);
        }
        if(t)
        printf("\n");
    }
    return 0;
}

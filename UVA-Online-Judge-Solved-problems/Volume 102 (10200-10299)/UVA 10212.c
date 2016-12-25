#include<stdio.h>
#define mod 1000000000
int main()
{
    long long int N,M;
    while(scanf("%lld %lld",&N,&M)!=EOF)
    {
        if(M)
        {
            long long i,ans=1;
        for(i=N;i>=N-M+1;i--)
        {
            ans*=i;

            while(ans%10==0)
                ans/=10;

                ans%=mod;
        }
        printf("%lld\n",ans%10);
        }
        else
            printf("1\n");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    unsigned long long p,t,n,a,b,i;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu %llu %llu",&n,&a,&b);
        unsigned long long fun[10000]={};
        fun[0]=a;
        fun[1]=b;
        for(i=2;i<=n;i++)
            fun[i]=(fun[i-1]*fun[i-2])%10;
                p=fun[n]+fun[n];
                printf("%llu\n",p);
    }
    return 0;
}

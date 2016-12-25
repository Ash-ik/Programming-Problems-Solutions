#include<stdio.h>
#include<string.h>
#include<math.h>
unsigned long long bigmod(unsigned long long a,unsigned long long b,unsigned long long c)
{
    unsigned long long p;
    if(b==0)
        return 1;
    if(b%2)
        return (a%c*bigmod(a,b-1,c))%c;
    p=bigmod(a,b/2,c);
    return (p*p)%c;
}
int main()
{
    unsigned long long t,x,y,n,i,ans;
        while(scanf("%llu %llu %llu",&x,&y,&n)==3)
        {
            ans=bigmod(x,y,n);
            printf("%llu\n",ans);
        }
    return 0;
}

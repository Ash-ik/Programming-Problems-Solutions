#include<stdio.h>
unsigned long long gcd(unsigned long long a,unsigned long long b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
int main()
{
    freopen("dataN.txt","r",stdin);
   unsigned long long a,b,GCD,n;
    scanf("%llu",&n);
        while(n--)
        {
            scanf("%llu / %llu",&a,&b);
            GCD=gcd(a,b);
        if(GCD<0)
        printf("%llu / %llu\n",(0-a)/GCD,(0-b)/GCD);
        else printf("%llu / %llu\n",(a/GCD),(b/GCD));
        }
    return 0;
}

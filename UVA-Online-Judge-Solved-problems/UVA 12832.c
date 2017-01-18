#include<stdio.h>
long long gcd(long long a,long long b)
{
if(b==0)
return a;
return gcd(b,a%b);
}

int main()
{
    long long t,cases=0;
    scanf("%lld",&t);
    while(t--)
    {
        long long p=-1,n,x=1,y=0;
        scanf("%lld",&n);
        while(n--)
        {
            long long x1,y1;
            scanf("%lld %lld",&y1,&x1);
            ++p;
            if(p==0)
                {
                    x=x1;
                    y=y1;
                }
            else
            {
            x=x*y1+y*x1;
            y=y*y1;
            long long GCD=gcd(x,y);
            x=x/GCD;
            y=y/GCD;
            }

        }

        long long GCD=gcd(x,y);
            x=x/GCD;
            y=y/GCD;

            printf("Case %lld: %lld/%lld\n",++cases,x,y);
    }
return 0;
}

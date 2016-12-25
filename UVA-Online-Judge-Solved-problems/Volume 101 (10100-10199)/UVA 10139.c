#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define getchar_unlocked getchar
long long scan_positive_int(long long *a)
{
        long long x=0;
        register long long c=getchar_unlocked();
        if(c==EOF) return EOF;
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}



long long get_powers(long long n,long long p)
{
    long long power=p,res=0;
    while(power<=n)
        res+=n/power,power=power*p;
    return res;
}

bool solve(long long fact,long long divisors)
{
    if(divisors==0) return false;
    if(divisors==1) return true;
    if(fact>=divisors) return true;

    long long lim=sqrt(divisors),i,j,n=divisors,cnt;
    for(i=2;i<=lim;i++)
    {
        cnt=0;
        while(!(n%i))
        {
            cnt++;
            n=n/i;
        }
            if(cnt>get_powers(fact,i)) return false;
    }
    return n<=fact;
}
int main()
{

    long long a,b;
    while((scan_positive_int(&a),scan_positive_int(&b))!=EOF)
    {
        if(solve(a,b))
            printf("%lld divides %lld!\n",b,a);
        else
            printf("%lld does not divide %lld!\n",b,a);
    }
    return 0;
}

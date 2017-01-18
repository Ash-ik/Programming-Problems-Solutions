#include<stdio.h>
long long scan_positive_int(long long *a)
{
        long long x=0;
        register long long c;
        if((c=getchar_unlocked())==EOF) return EOF;
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

long long solve(long long n,long long low,long long high)
{
    long long z,temp,msb=31,ans=0;
    while(msb>=0)
    {
        temp=(long long)1<<msb;
        z=ans|temp;
        if(temp&n)
        {
            if(z<=low)
                ans=z;
        }
        else if(z<=high)
            ans=z;
            msb--;
    }
    return ans;
}

int main()
{
    long long n,l,u;
    while((scan_positive_int(&n),scan_positive_int(&l),scan_positive_int(&u))!=EOF)
        printf("%lld\n",solve(n,l,u));
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
long long AND(long long a, long long b) {
    long long x = a^b;
    long long s = x>>1;

    while (s) {
        x = x|s;
        s >>= 1;
    }
    return a&b&~x;
}

long long int  OR(long long int l, long long int r)
{
    long long int i,a,c;
    double h;
    a=r;
    long long v1[500],v2[500];
    int len1=0,len2=0;
    while(l)
    {
        v1[len1++]=l%2;
        l>>=1;
    }
    while(r)
    {
        v2[len2++]=r%2;
        r>>=1;
    }

    l=(1<<len2)-1;
    if(l==a) return l;
    if(len2>len1)
    {
        c=0;
        for(i=0;i<len2;i++)
            c+=(long long)1<<(len2-i-1);
        return c;
    }
    else
    {
        c=0;
        for(i=len2-1;i>=0;i--)
        {
            if(v1[i]==v2[i]) c+=v1[i]*1<<i;
            else break;
        }

        for(;i>=0;i--)
            c+=(long long)1<<i;
        return c;
    }
}
#define getchar_unlocked getchar
long long scan_positive_int(long long *a)
{
        long long x=0;
        register long long c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

int main()
{
    freopen("dataN.txt","r",stdin);
    freopen("data1.txt","w",stdout);
    long long t,x,i,j,k,ans;
        int cases=1;
        scan_positive_int(&t);
	while(t--)
    {
        scan_positive_int(&i);
        scan_positive_int(&j);
        printf("Case %d: %lld %lld\n",cases++,OR(i,j),AND(i,j));
    }
	return 0;
}


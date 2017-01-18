#include<stdio.h>
#include<stdlib.h>
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
    long long a,b,ans[50002];
    int i=0,j;
    while(scan_positive_int(&a) &&scan_positive_int(&b) &&(a+b))
        ans[i++]=(b/5)-(a/5)+1;

        for(j=0;j<i;j++)
            printf("%lld\n",ans[j]);
    return 0;
}

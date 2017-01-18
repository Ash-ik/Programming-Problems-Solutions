#include<stdio.h>
#include<string.h>
#define MAX 1000000000000ll
long long ansA,ansB;

void sum(long long z)
{
    ansB=ansB+z;
    if(ansB>=MAX)
    {
        ansA=ansA+(ansB/MAX);
        ansB=ansB%MAX;
    }
}
char in[30];
int main()
{
    long long digits,temp,n,cases=1;
    while(gets(in))
    {
        sscanf(in,"%lld",&n);
        if(n<0) return 0;
        ansA=ansB=0;
        temp=n;
        digits=1;
        while(temp>1)
        {
            sum((temp>>2)*digits);
            if((temp&3)==3)
                sum((n&(digits-1))+1);
            digits=digits<<1;
            temp=temp>>1;
        }

        if(ansA)
            printf("Case %lld: %lld%012lld\n",cases++,ansA,ansB);

        else printf("Case %lld: %lld\n",cases++,ansB);
    }
    return 0;
}

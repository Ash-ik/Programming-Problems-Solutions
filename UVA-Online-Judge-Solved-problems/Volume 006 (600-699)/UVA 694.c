#include<stdio.h>
long count(long n,long l)
{
    long ans=1;

    while(n!=1)
    {
        if(!(n&1))
            {
                n=n>>1;
                ans=ans+1;
            }
        else
        {
            n=(3*n+1);

            if(n>l) return ans;

            ans=ans+1;
        }

    }
    return ans;
}
int main()
{
    char in[25];
    long a,b,cases=1;
    while(gets(in))
    {
        sscanf(in,"%ld %ld",&a,&b);
        if(a==-1 &&b==-1) return 0;
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",cases++,a,b,count(a,b));
    }
}

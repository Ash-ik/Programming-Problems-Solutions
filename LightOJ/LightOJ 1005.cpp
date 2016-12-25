#include<stdio.h>
#define llu unsigned long long
#define sc(x) x=scan_integer()
#define printNumWithCases(x) printf("Case %d: %llu\n",cases++,x)
#define MAXIMUM_BUFFER_CAPACITY 35000
#define read freopen("dataN.txt","r",stdin)

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
int cases=1;

int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}
int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int t,n,k,i;
    llu ans;
    sc(t);
    while(t--)
    {
        ans=0;
        sc(n);sc(k);
        if(n*n>=k)
        {
            ans=1;
            for(i=1;i<=k;i++)
            {
                ans=(ans*n*n)/i;
                n--;
            }
        }
        printNumWithCases(ans);
    }
    return 0;
}

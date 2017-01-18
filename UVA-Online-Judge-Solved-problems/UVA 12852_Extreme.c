#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef long long LL;

#define MAXIMUM_BUFFER_CAPACITY 65000
char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;

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

LL gcd(LL a,LL b)
{
if(b==0) return a;
return gcd(b,a%b);
}
LL lcm(LL a,LL b)
{
    return (a*b)/gcd(a,b);
}
    int i=1,t,n;
    LL ans;

int main()
{
fread(buffer_to, 1, MAXIMUM_BUFFER_CAPACITY, stdin);
    t=scan_integer();
    while(t--)
    {
        ans=1;
        n=scan_integer();
        while(n--)
            ans=lcm(ans,scan_integer());

        printf("Case %d: %lld\n",i++,ans*35);
    }
    return 0;
}


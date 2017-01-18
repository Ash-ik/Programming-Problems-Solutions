#include<stdio.h>
#include<math.h>
#define MAXIMUM_BUFFER_CAPACITY 50000

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;

long long scan_integer()
{
    long long k=0;
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
    long long N,a,i=0,ans[2010];
    N=scan_integer();

    while(N--)
        ans[i++]=(scan_integer())>>1;

    for(N=0;N<i;N++)
        printf("%lld\n",ans[N]);
    return 0;
}

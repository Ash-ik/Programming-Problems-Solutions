#include<stdio.h>
#include<stdbool.h>
#define putchar_unlocked putchar
#define MAXIMUM_BUFFER_CAPACITY 50000

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


int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int i,t,n,fib[40]={1,1};
    bool zero;

    for(i=2;i<40;i++)
        fib[i]=fib[i-1]+fib[i-2];

    t=scan_integer();
    while(t--)
    {
        zero=false;
        n=scan_integer();
        printf("%d = ",n);
        for(i=39;i>0;i--)
     {
            if(fib[i]<=n)
            putchar_unlocked('1'),zero=true,n=n-fib[i];

            else if(zero) putchar_unlocked('0');
    }
    puts(" (fib)");

    }
    return 0;
}

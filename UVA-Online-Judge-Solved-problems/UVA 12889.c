#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXIMUM_BUFFER_CAPACITY 1500000
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
    char verdict[2][30]={"Happy Birthday Tutu!\n","Better luck next time!\n"};
    int i,t,n,x;
    long long ans;

    fread(buffer_to, 1, MAXIMUM_BUFFER_CAPACITY, stdin);
    t=scan_integer();

    while(t--)
    {
        ans=0;
        x=n=scan_integer();
        while(x--)
            ans+=scan_integer();
        if(ans%n)
            fwrite(verdict[0],1,21,stdout);
        else
            fwrite(verdict[1],1,23,stdout);
    }
    return 0;
}



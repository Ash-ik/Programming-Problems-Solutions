#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#define MAXIMUM_BUFFER_CAPACITY 15000000
using namespace std;
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
int i,t,n,x;
long long ans;
    char verdict[2][30]={"Happy Birthday Tutu!\n","Better luck next time!\n"};
    string temp;

int main()
{
    freopen("dataN.txt","r",stdin);
    fread(buffer_to, 1, MAXIMUM_BUFFER_CAPACITY, stdin);
    t=scan_integer();

    while(t--)
    {
        ans=0;
        x=n=scan_integer();
        while(x--)
            ans+=scan_integer();
        if(ans%n)
            temp=temp+verdict[0];
        else
            temp=temp+verdict[1];
    }
    printf("%s",temp.c_str());
    return 0;
}




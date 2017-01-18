#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
long long answer[14143]={};

#define MAXIMUM_BUFFER_CAPACITY 5000000

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
    int i;
    long long num,sum=0;
    for(i=1;i<=14142;i++)
    {
        sum=sum+i;
        answer[i]=sum;
    }
    while(num=scan_integer())
    {
        if(!num) return 0;
        int numOfPage=upper_bound(answer,answer+14142,num)-answer;
        printf("%lld %d\n",answer[numOfPage]-num,numOfPage);
    }
    return 0;
}

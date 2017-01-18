#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;

#define MAXIMUM_BUFFER_CAPACITY 9000100

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
    int t;
    t=scan_integer();
    while(t--)
    {
        map<int,int>last_occurance;
        int i,n,begins=1,maxi=0;
        n=scan_integer();
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            a[i]=scan_integer();
            if(last_occurance[a[i]]>=begins)
                begins=last_occurance[a[i]]+1;
            last_occurance[a[i]]=i;
            if((i-begins+1)>maxi)
                maxi=i-begins+1;
        }
        printf("%d\n",maxi);
    }
    return 0;
}

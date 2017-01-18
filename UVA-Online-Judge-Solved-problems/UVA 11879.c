#include<stdio.h>
#include<math.h>
#include<stdlib.h>
char a[100000];
int main()
{
    unsigned long long x,n;
    while(scanf("%s",a)==1 &&atoi(a))
    {
        x=a[0]-48; n=0;
        while(a[++n]!='\0') x=(x*10+a[n]-48)%17;
        puts(!x?"1":"0");
    }
    return 0;
}

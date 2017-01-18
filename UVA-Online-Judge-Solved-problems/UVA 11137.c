#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    long long ans[10005]={1};
    double x;
    for(i=1;i<22;i++)
    {
        n=i*i*i;
        for(j=n;j<=10000;j++)
            ans[j]=ans[j]+ans[j-n];
    }
char in[10];
        while(gets(in))
            printf("%lld\n",ans[atoi(in)]);

    return 0;
}




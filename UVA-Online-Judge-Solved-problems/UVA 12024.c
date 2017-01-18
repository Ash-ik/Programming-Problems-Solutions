#include<stdio.h>
int main()
{
    int t,n,fact[13]={0,0,2,6,24,120,720,5040,40320,362880,2628800,39916800,479001600},dfact[20]={0,0,1,2,9,44,265,1854,14833,133496,1334961,14684570,176214841};
    char in[10];
    gets(in);
    t=atoi(in);
    while(t--)
    {
        gets(in);
        n=atoi(in);
        printf("%d/%d\n",dfact[n],fact[n]);
    }
    return 0;
}

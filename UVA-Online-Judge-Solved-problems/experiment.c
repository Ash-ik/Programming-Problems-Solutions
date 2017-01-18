#include<stdio.h>
int main()
{
    int t,i,n,N,reversed=0,temp=0;
    scanf("%d",&n);
    N=n;
    while(temp)
    {
        while(n!=0)
    {
        reversed=reversed*10;
        reversed=reversed+n%10;
        n=n/10;
    }
    temp=temp+N+reversed;
    }
}

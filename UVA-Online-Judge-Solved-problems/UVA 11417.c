#include<stdio.h>
int gcd(int n1,int n2)
{
    int temp;
    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    return n1;
}
int main()
{
    int N,G,i,j;
    while(scanf("%d",&N)==1 &&N)
    {
        G=0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
    G+=gcd(i,j);
    printf("%d\n",G);
    }
    return 0;
}

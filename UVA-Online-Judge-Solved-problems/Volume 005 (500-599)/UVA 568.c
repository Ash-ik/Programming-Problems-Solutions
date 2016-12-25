#include<stdio.h>
int fact[10000],f,i,n;
int main()
{
    f=fact[0]=fact[1]=1;
    for (i=2;i<=10000 ;i++)
    {
        f*=i;
        while (f%10==0) f/=10;
        f=f%100000;
        fact[i]=f%10;
    }
    for(;scanf("%d",&n)==1;printf("%5d -> %d\n",n,fact[n]));
    return 0;
}

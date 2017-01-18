#include<stdio.h>
#include<math.h>
int main()
{
    freopen("sakib.txt","w",stdout);
    int fact[1000],i;
    fact[0]=1;fact[1]=0;
    for(i=2;i<=12;i++)
    fact[i]=(i-1)*(fact[i-1]+fact[i-2]);
    for(i=0;i<=12;i++)
    printf("%d\n",fact[i]);
}

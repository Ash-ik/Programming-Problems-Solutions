#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long f=1,i,ans[217]={};
    double fact=0.0,j=1.0;
    for(i=196;i<=216;i++)
    {
        while(floor(fact)+1<=j)
        {
            fact=fact+log10(++f);
        }
        ans[i]=f-1;
        j=j*2;
        printf("%lld\n",ans[i]);
    }

}

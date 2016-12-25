#include<stdio.h>
int main()
{
    int x,mod,t,n;
    int a[30]= {};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<10)
        {
            printf("%d\n",n);
            continue;
        }
        mod=9,x=0;
        while(mod>1)
        {
            while(!(n%mod))
            {
                a[x++]=mod;
                n=n/mod;
            }
            mod--;
        }
        if(n!=1) puts("-1");
        else
        {
            for(mod=x-1; mod>=0; mod--) printf("%d",a[mod]);
            puts("");
        }
    }
    return 0;
}

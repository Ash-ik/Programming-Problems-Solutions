#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long long ans[1000],i,a,x;
int main()
{
    for(i=1;i<32;i++) ans[i]=1<<i;
    while(scanf("%lld",&a)==1)
    {
        for(i=1;i<32;i++)
                if(a<ans[i])
            {
                printf("%lld\n",i);
                break;
            }
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 10000000
int ans[max];
int main()
{
    int t,i,n;
    double sum=0;
    for(i=1;i<=max;i++)
        {
            sum+=log10(i);
            ans[i]=sum+1;
        }
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            printf("%d\n",ans[n]);
        }
        return 0;
}

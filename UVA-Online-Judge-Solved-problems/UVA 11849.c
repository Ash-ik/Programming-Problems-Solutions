#include<stdio.h>
#include<stdlib.h>
long long i,a,m,j,n,num,temp;
int main()
{
    long long ans[1000000];
    while(scanf("%lld %lld",&m,&n)==2 && !(m==0 &&n==0))
    {
        num=0;
        for(i=0;i<m;i++)
        {
            scanf("%lld",&a);
            ans[a]=1;
        }
        for(j=0;j<n;j++)
        {
            scanf("%lld",&temp);
            if(ans[temp]==1)
                num++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}

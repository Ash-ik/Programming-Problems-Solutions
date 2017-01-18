#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,k;
    while(scanf("%d %d",&j,&k)!=EOF)
    {
        int t,i,a[2501]={},x,ans=0,maxi=0;
        for(i=1;i<=j*k;i++)
        {
            scanf("%d",&x);
            if(i%j==0) t=j;
            else t=i%j;
            a[t]+=x;
            if(a[t]>=maxi)
                maxi=a[t],ans=t;
        }
        printf("%d\n",ans);
    }
    return 0;
}

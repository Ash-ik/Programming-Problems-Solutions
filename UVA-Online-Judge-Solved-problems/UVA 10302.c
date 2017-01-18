#include<stdio.h>
int main()
{
    long long ans[50000+10]={};
    int i,n;
    for(i=1;i<=50000;i++)
        ans[i]=ans[i-1]+(i*i*i);
    while(scanf("%d",&n)!=EOF)
    printf("%lld\n",ans[n]);
    return 0;
}

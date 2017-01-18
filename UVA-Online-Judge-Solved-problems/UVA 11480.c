#include<stdio.h>
#define MAX 1000010
long long ans[MAX];
int main()
{
    int i,j;

    ans[6]=1;
    for(i=1;i<=3;i++)
    for(j=6;j<=MAX-i;j++)
    {
        ans[j+i]+=ans[j];
    }
    i=1;
    int n;
    while(scanf("%d",&n) &&n)
        printf("Case %d: %lld\n",i++,ans[n]);
    return 0;
}

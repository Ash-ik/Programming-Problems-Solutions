#include<bits/stdc++.h>
using namespace std;
int i,j,ans,n,weight[1001],maxLoad[1001],dp[1001][1001];
int main()
{
    while(scanf("%d",&n) &&n)
    {
        fill(&dp[0][0],&dp[1000][1000],30001);
        ans=0;
    for(i=n;i>0;i--)
        scanf("%d %d",&weight[i],&maxLoad[i]);
    dp[0][0]=0;
    for(i=1;i<=n;i++)
    {
        dp[i][0]=0;
        for(j=1;j<=n;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(dp[i-1][j-1]<=maxLoad[i])
            {
                dp[i][j]=min(dp[i-1][j-1]+weight[i],dp[i][j]);
                ans=max(ans,j);
            }
        }
    }
    printf("%d\n",ans);
    }

    return 0;
}

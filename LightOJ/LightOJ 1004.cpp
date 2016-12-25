#include<bits/stdc++.h>
#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d\n",x)
#define pb push_back
#define erase(a) memset(a,0,sizeof(a))
#define eraseDP memset(dp,-1,sizeof(dp))
#define read freopen("dataN.txt","r",stdin)
using namespace std;
int t,a[200][200],sizeI[200],dp[200][200];
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int solve(int i,int j)
{
    if(j<1 || j>sizeI[i]) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i>=t) dp[i][j]=a[i][j]+maxi(solve(i+1,j),solve(i+1,j-1));
    else dp[i][j]=a[i][j]+maxi(solve(i+1,j),solve(i+1,j+1));
    return dp[i][j];
}
int main()
{
    int n,i,j,x,cases=1;
    sf(n);
    while(n--)
    {
        erase(a);
        erase(sizeI);
        eraseDP;
        sf(t);

        for(i=1;i<=t;i++)
        {
            for(j=1;j<=i;j++)
                sf(a[i][j]);
                sizeI[i]=i;
        }
    for(i=t+1;i<2*t;i++)
        {
            for(j=1;j<=2*t-i;j++)
                sf(a[i][j]);
                sizeI[i]=2*t-i;
        }
        printf("Case %d: %d\n",cases++,solve(1,1));
    }
    return 0;
}

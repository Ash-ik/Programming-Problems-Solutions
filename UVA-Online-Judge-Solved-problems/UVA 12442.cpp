#include<stdio.h>
#define MAX 50005
#define read freopen("dataN.txt","r",stdin)
using namespace std;

int adj[MAX],counts[MAX];
bool visited[MAX];
int dfs(int node)
{
    int ans=0;
    visited[node]=true;
    if(!visited[adj[node]]) ans=dfs(adj[node])+1;
    visited[node]=false;
    counts[node]=ans;
    return ans;

}
int main()
{
    int t,n,i,j,u,v;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&u,&v);
            adj[u]=v;
            visited[u]=false;
            counts[u]=-1;
        }
        int maxi=0,pos=1;
        for(j=1;j<=n;j++)
        {
            if(counts[j]==-1) dfs(j);
            if(counts[j]>maxi) maxi=counts[j],pos=j;
        }

         printf("Case %d: %d\n",i,pos);
    }
    return 0;
}

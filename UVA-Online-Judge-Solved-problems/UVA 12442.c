#include<stdio.h>
#include<stdbool.h>
#define MAX 50005
#define read freopen("dataN.txt","r",stdin)

#define getchar_unlocked getchar
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}


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
    scan_positive_int(&t);
    for(i=1;i<=t;i++)
    {
            scan_positive_int(&n);
        for(j=0;j<n;j++)
        {
                scan_positive_int(&u);
                scan_positive_int(&v);
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


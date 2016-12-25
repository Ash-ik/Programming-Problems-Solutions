#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<stdbool.h>
using namespace std;

bool bfs(vector<int>data[205],int beginning,int n)
{
	queue<int>Q;
	Q.push(beginning);
	int visited[205]={0},level[205];
	int parent[205];
	visited[beginning]=1;
    level[beginning]=0;
	while(!Q.empty())
	{
		int u=Q.front();
		for(int i=0;i<data[u].size();i++)
		{
			int v=data[u][i];
			if(visited[v] &&level[u]==level[v]) return false;
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	return true;
	for(int i=0;i<n;i++)
		printf("%d to %d distance %d\n",beginning,i,level[i]);
}
int main()
{

    int i,j,k,edge,node;
    while(scanf("%d",&node) &&node)
    {
        vector<int>data[205];
        scanf("%d",&edge);

            for(i=0;i<edge;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(i==0)
            k=x;
        data[x].push_back(y);
        data[y].push_back(x);

    }
    if(bfs(data,k,node)) printf("BICOLORABLE.\n");
    else printf("NOT BICOLORABLE.\n");

    }
    return 0;

}


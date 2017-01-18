#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<stdbool.h>
using namespace std;
vector<int>data[100];
    vector<int>cost[100];
void bfs(int beginning,int ending)
{
    queue<int>Q;
    Q.push(beginning);
    int parent[100]={0},level[100]={0};
    bool visited[100];
    while(!Q.empty())
    {
        int i,q=Q.front();
        for(i=0;i<data[q].size();i++)
        {
            int p=data[q][i];
            if(!visited[p])
            {
                level[p]=level[q]+1;
                visited[p]=true;
                parent[p]=q;
                Q.push(p);
            }

        }
        Q.pop();
    }

    int t=ending;
    printf("%d ",t);
    while(parent[t]!=beginning &&printf(" -> "))
    {
        printf("%d",parent[t]);
        t=parent[t];
    }

//    for(int i=1;i<=node;i++)
//		printf("%d to %d distance %d\n",beginning,i,level[i]);
}
int main()
{
    int i,j,k,edge,node;
    scanf("%d %d",&node,&edge);
    for(i=0;i<edge;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(i==0)
            k=x;
        data[x].push_back(y);
        data[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }
    int ending;
    scanf("%d",&ending);
    bfs(data[k][0],ending);
}

#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<stdio.h>
#include<stdbool.h>
#define MAXX 100000
#define loop(i, n) for(int i=0; i<n; i++)
using namespace std;





int main()
{
    int i,j,k,connections,x,y;
    while(scanf("%d",&connections) &&connections)
    {
        map<int,bool>nodes;
        vector<int>data[MAXX];
        char costs[MAXX];

        for(i=0;i<MAXX;i++)
            data[i].clear();

        int counts=0;
        for(i=0;i<connections;i++)
        {
            scanf("%d %d",&x,&y);
            if(!nodes[x])
               counts++,nodes[x]=true;

            if(!nodes[y])
               counts++,nodes[y]=true;

            if(i==0)
                k=x;
            data[x].push_back(y);
            costs[x]=1;
            costs[y]=1;
            data[y].push_back(x);
        }

        while(scanf("%d %d",&x,&y) &&!(x==0 &&y==0))
       {
            int ans=bfs(data,costs,x,y);
            printf("%d\n",ans);
       }

       for(i=0;i<=100;i++)
       data[i].clear();
    }
    return 0;
}


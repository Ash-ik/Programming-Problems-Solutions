#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<stdbool.h>
#include<map>
#include<string>
#include<string.h>
using namespace std;

map<string,vector<string> > data;
map<string,bool>visited;

map<string,string>root;
bool no_route=false;
void bfs(string start, string last)
{
        int len;
    string s, temp;
    queue<string> Q;
    Q.push(last);
    visited[last]=true;
    while(!Q.empty())
    {
        s=Q.front();
        len=data[s].size();
        for(int i=0;i<len;i++)
        {
            temp=data[s][i];
            if(!visited[temp])
            {
                root[temp]=s;
                if(temp==start)
                    return;

                visited[temp]=true;
                Q.push(temp);
            }
        }
        Q.pop();
    }
    no_route=true;
}

int main()
{
    int i,j,k,cnt;
    bool print_newLine=false;
    while(scanf("%d",&cnt)!=EOF)
    {
        if(print_newLine)
            printf("\n");
        print_newLine=true;
        string x,y;
    for(i=0;i<cnt;i++)
    {
        cin>>x>>y;
        data[x].push_back(y);
        data[y].push_back(x);
    }
        cin>>x>>y;
    bfs(x,y);
    if(no_route)
        printf("No route\n");
    else
    while(x!=y)
    {
        printf("%s %s\n",x.c_str(),root[x].c_str());
        x=root[x];
    }
    root.clear();
    data.clear();
    visited.clear();
    no_route=false;
    }

    return 0;
}

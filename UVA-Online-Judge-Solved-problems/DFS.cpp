#include<bits/stdc++.h>
using namespace std;

vector<char>data[100];

void DFS(int nodes,char starting)
{
    stack<char>s;
    bool visited[nodes+1];
    s.push(starting);
    visited[starting]=true;
    cout << "Depth first Search starting from vertex ";
    cout << starting << " : " << endl;
    while(!s.empty())
    {
        char k = s.top();
        s.pop();
        cout<<k<<" ";
        for(int i=0; i<data[k].size(); i++)
        {
            char p=data[k][i];
            if(!visited[p])
            {
                s.push(p);
                visited[p] = true;
            }
        }
        cout<<endl;
    }
}
int main()
{
    freopen("dataN.txt","r",stdin);
        int i,j,k,edge,node;
        scanf("%d %d\n",&node,&edge);
        for(i=0; i<edge; i++)
        {
            char x,y;
            scanf("%c %c\n",&x,&y);
            data[x].push_back(y);
        }
        int starting;
        scanf("%c",&starting);
        DFS(node,starting);
        return 0;
    }


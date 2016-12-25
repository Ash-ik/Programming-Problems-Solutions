#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#define inp(x) scanf("%d",&x)
#define out(x) printf("%d\n",x)
#define loop(p,q,r) for(p=q;p<r;p++)
#define clearAll(arrName,val) memset(arrName,val,sizeOf(arrName))
#define MAX 501
#define ll long long
#define veci vector<int>
#define qi queue<int>
#define pq priority_queue
#define createNode(x,p,q) x[p].push_back(q)
#define INF 20005
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
using namespace std;
#define getchar_unlocked getchar
struct data
{
    int city;
    int dist;
};

struct compare{
    bool operator()(data a, data b)
    {
        return a.dist > b.dist;
    }

};


int arr[MAX][MAX];
int cost[MAX];
veci node[MAX];
int n;


void dijkstra(int start)
{
    priority_queue<data,vector<data>,compare>Q;
    data u,v;
    u.city=start;
    u.dist=0;
    cost[start]=0;

    int i,len;

    Q.push(u);
    while(!Q.empty())
        {
           u=Q.top();
           Q.pop();
           if(u.dist==cost[u.city])
           {
               len=node[u.city].size();
               loop(i,0,len)
               {
                   v.city=node[u.city][i];
                   v.dist=max(u.dist,arr[u.city][v.city]);
                   if(v.dist<cost[v.city])
                   {
                       cost[v.city]=v.dist;
                       Q.push(v);
                   }
               }
           }
        }

        loop(i,0,n)
        {
            if(cost[i] == INF)
                puts("Impossible");
            else
                out(cost[i]);
        }


}


int main()
{
    int i,j,k,t,m,p,q,w,start,cases=0;
    inp(t);
    while(t--)
    {

        loop(i,0,MAX)
        {
            node[i].clear();
            cost[i]=INF;
            loop(j,0,MAX)
                arr[i][j]=INF;
        }

        inp(n);
        inp(m);
        loop(k,0,m)
        {

            inp(p);inp(q);inp(w);
            if(w<arr[p][q])
            {
                arr[p][q]=w;
                arr[q][p]=w;
                createNode(node,p,q);
                createNode(node,q,p);
            }
        }
        inp(start);

        printf("Case %d:\n",++cases);
        dijkstra(start);
    }

    return 0;
}

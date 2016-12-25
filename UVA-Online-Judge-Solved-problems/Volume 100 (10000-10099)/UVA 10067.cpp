#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<vector>
#include<queue>
#define MAX 10000
using namespace std;
vector<int>data[MAX];
int level[MAX];
bool visited[MAX];

#define MAXIMUM_BUFFER_CAPACITY 3000000

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do
    {
        k = k*10 + *buffer_ptr++ - '0';
    }
    while(*buffer_ptr > 32);
    return k;
}
int create_number()
{
    int p,q,r,s;
    p=scan_integer();
    q=scan_integer();
    r=scan_integer();
    s=scan_integer();
//    scanf("%d %d %d %d",&p,&q,&r,&s);
    return p*1000+q*100+r*10+s;
}

void pregenerate()
{
    int i,n,m,L,R;
    for(i=0; i<MAX; i++)
    {
        n=i;
        m=n%10;
        L=R=i-m;
        L=L+(m+1)%10;
        R=R+(m+9)%10;
        data[i].push_back(L);
        data[i].push_back(R);

        n=n/10;
        m=n%10;
        L=R=i-m*10;
        L=L+(m+1)%10*10;
        R=R+(m+9)%10*10;
        data[i].push_back(L);
        data[i].push_back(R);

        n=n/10;
        m=n%10;
        L=R=i-m*100;
        L=L+(m+1)%10*100;
        R=R+(m+9)%10*100;
        data[i].push_back(L);
        data[i].push_back(R);

        n=n/10;
        m=n%10;
        L=R=i-m*1000;
        L=L+(m+1)%10*1000;
        R=R+(m+9)%10*1000;
        data[i].push_back(L);
        data[i].push_back(R);
    }
}


int bfs(int beginning,int ending)
{
    if(beginning[visited]||ending[visited]) return -1;
    else if(beginning==ending && !beginning[visited] &&!ending[visited]) return 0;
    queue<int>Q;
    Q.push(beginning);
    int i;


    while(!Q.empty())
    {
        int i,q=Q.front();
        for(i=0; i<data[q].size(); i++)
        {
            int p=data[q][i];
            if(!visited[p])
            {
                level[p]=level[q]+1;
                visited[p]=true;
                Q.push(p);
            }
            if(p==ending) return level[ending];

        }
        Q.pop();
    }
    if(!level[ending]) return -1;
    return level[ending];
}

int main()
{

    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int i;
    pregenerate();
    int t,n1,n2,n3,n4,numOf_false_combinations;
//    scanf("%d",&t);
    t=scan_integer();
    while(t--)
    {
        memset(visited,0,sizeof(visited));
        memset(level,0,sizeof(level));
        int starting=create_number();
        int ending=create_number();

//        scanf("%d",&numOf_false_combinations);
        numOf_false_combinations=scan_integer();
        for(i=0; i<numOf_false_combinations; i++)
            visited[create_number()]=true;

        int ans=bfs(starting,ending);

        printf("%d\n",ans);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct data
{
    int x,y;
}in[6];

bool cmp(data a,data b)
{
    if(a.x==b.x) return a.y>b.y;
    return a.x>b.x;
}
bool match(data a,data b)
{
    return a.x==b.x &&a.y==b.y;
}
bool check()
{
    if(!match(in[0],in[1])||!match(in[2],in[3])||!match(in[4],in[5]))
        return false;
    if(in[0].x!=in[2].x || in[0].y!=in[4].x || in[2].y!=in[4].y)
        return false;
    return true;
}

int main()
{
    char input[14];
    int cnt=-1;
    while(gets(input))
    {
        ++cnt;
        sscanf(input,"%d %d",&in[cnt].x,&in[cnt].y);
        if(in[cnt].x<in[cnt].y)
            swap(in[cnt].x,in[cnt].y);
        if(cnt==5)
        {
            cnt=-1;
            sort(in,in+6,cmp);
            if(check())
                puts("POSSIBLE");
            else
                puts("IMPOSSIBLE");
        }
    }
    return 0;
}

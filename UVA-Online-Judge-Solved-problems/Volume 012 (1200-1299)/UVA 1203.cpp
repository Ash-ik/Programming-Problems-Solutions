#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<string>
#include<map>
#include<string.h>
using namespace std;
int main()
{
    char ins[20];
    priority_queue<pair<int,int> >save;
    map<int,int>data;
    while(scanf("%s",ins) &&strcmp(ins,"#"))
    {
        int a,b;
        scanf("%d %d",&a,&b);
        save.push(make_pair(-b,-a));
        data[a]=b;
    }
    int n;
    scanf("%d",&n);
    while(n--)
    {
        pair<int,int>p=save.top();
        int x=-p.second,y=-p.first;
        save.pop();
        cout<<x<<endl;
        save.push(make_pair(-(y+data[x]),-x));
    }
    return 0;
}

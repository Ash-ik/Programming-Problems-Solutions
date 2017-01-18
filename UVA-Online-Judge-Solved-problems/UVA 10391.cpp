#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    freopen("dataN.txt","r",stdin);
    string a[10000],ans[100000];
    long long i=0,x,y,p=0;
    while(cin>>a[i] &&++i);
    for(x=0;x<i;x++)
    for(y=0;y<i;y++)
    {
        if(y==x)continue;
        else
        ans[p++]=a[x]+a[y];
    }
    for(x=0;x<i;x++)
    for(y=0;y<p;y++)
    if(a[x]==ans[y])
    cout<<ans[y]<<endl;
    return 0;
}

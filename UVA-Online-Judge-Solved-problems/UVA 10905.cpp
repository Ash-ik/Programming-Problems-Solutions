#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
long long compare(string a,string b)
{
    return (a+b)>(b+a);
}
string s[1000000];
int main()
{
    long long t,i;
    while(scanf("%lld",&t)==1 &&t)
    {
        for(i=0;i<t;i++)
            cin>>s[i];
        sort(s,s+i,compare);
    for(i=0;i<t;i++)
            cout<<s[i];
            cout<<endl;
    }
    return 0;
}

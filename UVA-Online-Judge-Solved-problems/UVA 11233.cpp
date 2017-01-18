#include<cstdio>
#include<cstring>
#include<map>
#include<string>
#include<iostream>
using namespace std;
map<string,string>ans;
string a,b,c,d;
char c1,c2;
int main()
{
    int n,w,i,j,e;
    cin>>n>>w;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        ans[a]=b;
    }
    for(j=0;j<w;j++)
    {
        cin>>d;
        if(ans[d]!="")cout<<ans[d]<<endl;
        else
        {
                e=d.size();
                c1=d[e-1];
                c2=d[e-2];
                if(c1=='y'&& c2!='a'&&c2!='e'&&c2!='i'&&c2!='o'&&c2!='u')
                {
                    d.erase(e-1,1);
                    cout<<d<<"ies"<<endl;
                }
                else if(c1=='o'||c1=='s'||c1=='h'&&(c2=='s'||c2=='c')||c1=='x')
                    cout<<d<<"es"<<endl;
                else cout<<d<<"s"<<endl;
            }
    }
    return 0;
}

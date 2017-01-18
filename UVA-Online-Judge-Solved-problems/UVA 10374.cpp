#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<iostream>
using namespace std;
int main()
{
    freopen("dataN.txt","r",stdin);
    int x,n,i,j,m;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&n);

        map<string,string>member;
        map<string,int>vote;
    string t,p,q;

        for(i=0;i<n;i++)
        {
            getline(cin,t);
            getline(cin,p);
            member[t]=p;
        }
        cout<<member["Marilyn Manson"]<<endl;
        scanf("%d",&m);
        int max=0;
        string ans="";
        for(j=0;j<m;j++)
        {
            getline(cin,q);
            if(++vote[q]>max)
            {
                max=vote[q];
                ans=q;
            }
        }
        printf("%s %s\n",ans.c_str(),member[ans].c_str());
    }
    return 0;
}

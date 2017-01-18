#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;
string a,b,c;
int main()
{
    int t,i=1,p,flag,x;
    scanf("%d",&t);
    getchar();
    while(i<=t)
    {
        b="";
        c="";
        flag=0;
        getline(cin,a);
        x=a.length();
        getline(cin,c);
        for(p=0;p<x;p++)
        {
            if(a.at(p)==' ')
            flag=1;
            else b=b+a.at(p);
        }
        if(b==c &&flag==0)
        cout<<"Case "<<i<<": Yes"<<endl;
        else if(b==c &&flag==1)
        cout<<"Case "<<i<<": Output Format Error"<<endl;
        else
        cout<<"Case "<<i<<": Wrong Answer"<<endl;
        i++;
    }
    return 0;
}

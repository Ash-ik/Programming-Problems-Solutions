#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
string a,b;
int main()
{
    a="",b="";
    char p[100000];
    long long n,i,j,num;
    for(i=0;i<=10000;i++)
    {
        sprintf(p,"%d",i);
        a=a+p;
    }
    while(scanf("%lld",&num)==1 &&num<=10000)
    cout<<a.at(num)<<endl;
    return 0;
}

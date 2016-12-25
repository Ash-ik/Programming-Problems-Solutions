#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
using namespace std;
map<string, string>ans;
char *p,temp[100000],c[100000];
string a,b,x;
int main()
{
    while(gets(temp) &&strlen(temp))
    {
        p=strtok(temp," ");
        a=p;
        p=strtok(NULL," ");
        b=p;
        ans[b]=a;
    }
        while(gets(c) &&strlen(c))
        {
            x=c;
            x=ans[x];
            if(x.length()==0) printf("eh\n");
            else printf("%s\n",x.c_str());
        }
        return 0;
}

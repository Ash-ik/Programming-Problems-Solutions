#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<string.h>
#include<map>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    map<string,int>ans;
    vector<string>countries;
    scanf("%d\n",&t);
    while(t--)
    {
        char p[100];
        gets(p);
        istringstream sin(p);
        string x;
        sin>>x;
        if(++ans[x]==1) countries.push_back(x);
    }
    sort(countries.begin(),countries.end());
        for(int i=0;i<countries.size();i++)
            printf("%s %d\n",countries[i].c_str(),ans[countries[i].c_str()]);
    return 0;
}

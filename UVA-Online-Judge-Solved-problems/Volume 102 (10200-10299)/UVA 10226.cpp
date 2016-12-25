#include<stdio.h>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        map<string,int>data;
        vector<string>save;
        string str;
        int i=-1,cnt=0;
        while(getline(cin,str) &&str.length())
        {
            if(++data[str]==1)
            {
                save.push_back(str);
            }
            cnt++;
        }
        sort(save.begin(),save.end());
        vector<string>::iterator it=save.begin();
        for(;it!=save.end();it++)
            printf("%s %.4f\n",(*it).c_str(),data[(*it)]*(100.0)/cnt);

            if(t)
                puts("");
    }
    return 0;
}

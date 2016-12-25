#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
string a;
int t,num,i;
char x[10000];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int all[20]={};
        a="";
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            sprintf(x,"%d",i);
            a+=x;
        }
        for(i=0;i<a.length();i++)
        all[a.at(i)-'0']++;
        printf("%d %d %d %d %d %d %d %d %d %d\n",all[0],all[1],all[2],all[3],all[4],all[5],all[6],all[7],all[8],all[9]);
    }
    return 0;
}

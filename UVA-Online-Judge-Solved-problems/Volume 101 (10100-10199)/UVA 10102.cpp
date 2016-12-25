#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int abs(int a)
{
    if(a<0) return -a;
    return a;
}
int min_dis(string p[],int len,int X,int Y)
{
    int i,j,dis=0,min=999999;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len; j++)
        {
            if(p[i].at(j)=='3')
            {
                dis=abs(X-i)+abs(Y-j);
                if(dis<min) min=dis;
            }
        }
    }
    return min;
}
int main()
{
    int m,i,j;
    while(scanf("%d",&m)!=EOF)
    {
        string x[m];

        for(i=0; i<m; i++)
            cin>>x[i];
    int dis,max=-1;
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
                if(x[i].at(j)=='1')
                {
                    dis=min_dis(x,m,i,j);
                    if(dis>max) max=dis;
                }
        }
        if(max==-1) printf("0\n");
        else printf("%d\n",max);
    }
    return 0;
}

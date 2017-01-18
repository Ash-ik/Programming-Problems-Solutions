#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int>data[1000001];

int main()
{

    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        int i;
        for(i=0;i<=n;i++)
        data[i].clear();

        for(i=1;i<=n;i++)
        {
            int temp;
            scanf("%d",&temp);
            data[temp].push_back(i);
        }
        while(m--)
        {
            int q,num;
            scanf("%d %d",&q,&num);
            if(data[num].size()<q) printf("0\n");
            else printf("%d\n",data[num][q-1]);
        }
    }
    return 0;
}

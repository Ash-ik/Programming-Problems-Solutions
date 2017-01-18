#include<stdio.h>
#include<vector>
using namespace std;

#define MAXIMUM_BUFFER_CAPACITY 9000000

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}

int main()
{
        fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int n,m,t,i;
    t=scan_integer();
    for(i=1;i<=t;i++)
    {
        n=scan_integer();
        m=scan_integer();
        vector<int>data[n*n+2];
        int j,x,y,cost[n+1];

        for(j=0;j<n;j++) cost[j]=scan_integer();

        for(j=0;j<m;j++)
        {
            x=scan_integer();
            y=scan_integer();
            data[x].push_back(y);
        }
        int pos=0,ans=0;
        while(data[pos].size())
        {
            int maxi=0,p=0;
            for(j=0;j<data[pos].size();j++)
            {
                if(cost[data[pos][j]]>maxi)
                    maxi=cost[data[pos][j]],p=data[pos][j];
            }
            ans=ans+maxi;
            pos=p;
        }
        printf("Case %d: %d %d\n",i,ans,pos);
    }
    return 0;
}

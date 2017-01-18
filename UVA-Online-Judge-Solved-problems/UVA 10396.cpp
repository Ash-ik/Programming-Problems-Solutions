#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<100;i++)
        for(j=i+1;j<100;j++)
    {
        int p=i,q=j,r=0,s;
        vector<int>x;

        x.push_back(p%10);
        p=p/10;
        x.push_back(p);

        x.push_back(q%10);
        q=q/10;
        x.push_back(q);


        p=i*j;
        q=0;
        s=0;
        while(p)
        {
            for(s=0;s<x.size();s++)
            if(p%10==x[s])
            {
                x[s]=-3;
                q++;
                break;
            }
            p=p/10;
        }
        if(q==4)
        printf("%d*%d= %d\n",i,j,i*j);
    }
    return 0;
}


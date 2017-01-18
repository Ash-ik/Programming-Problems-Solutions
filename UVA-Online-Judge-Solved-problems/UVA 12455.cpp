#include<stdio.h>
#include<vector>
#include<stdbool.h>
using namespace std;
int main()
{
    int temp,i,num,n,t,counts,pos;
    scanf("%d",&t);
    while(t--)
    {
        bool found=false;

        scanf("%d %d",&num,&n);
        if(num==0)
        found=true;

        vector<int>data(n*n+2);
        data.push_back(0);
        while(n--)
        {
            scanf("%d",&temp);
            pos=data.size();
            for(int x=0;x<pos && !found;x++)
            {
                int z=data[x]+temp;
                if(z==num) found=true;
                else
                    data.push_back(z);
            }
        }
        if(found) printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

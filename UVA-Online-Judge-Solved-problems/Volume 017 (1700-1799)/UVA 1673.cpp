#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<stdbool.h>
using namespace std;
int main()
{
    int t,len,z,i,p;
    long long x,total,sum;
        char a[100005];
    while(scanf("%d",&t)!=EOF)
    {
        x=total=0;
        map<long long,bool>used;
        while(t--)
        {
            gets(a);
            for(z=0;a[z];z++)
            {
                sum=0;
                for(p=z;a[p];p++)
                {
                    sum=(a[p]-'0')+sum*10;
                    if(!used[sum])
                    {
                        total=(total+sum)%2012;
                        used[sum]=true;
                    }
                }
            }
        }
        printf("%lld\n",total);
    }
    return 0;
}

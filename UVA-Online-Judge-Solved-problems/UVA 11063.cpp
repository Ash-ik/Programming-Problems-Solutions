#include<cstdio>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long long cs=1,t,sum,i,j,flag,a[100099];
    while(scanf("%lld",&t)==1)
    {
        flag=0;
        map<long long int,long long int>store;
        store.clear();
        for(i=0;i<t;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]<1 ||(a[i-1]>=a[i]&& i))
            flag=1;
        }
        if(!flag)
        {
            for(i=0;i<t;i++)
            {
                for(j=i;j<t;j++)
        {
            sum=a[i]+a[j];
            if(store[sum])
            {
                flag=1;
                i=j=t;
            }
            ++store[sum];
        }
            }
        }
            if(!flag)
                printf("Case #%lld: It is a B2-Sequence.\n\n",cs++);
            else printf("Case #%lld: It is not a B2-Sequence.\n\n",cs++);
    }
    return 0;
}

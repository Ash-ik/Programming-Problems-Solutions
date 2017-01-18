#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100001],n,x,i,counts;
    scanf("%lld %lld",&n,&x);
        for(i=1;i<=n;i++) scanf("%lld",&a[i]);
        i=1;
        while(x-i>0)
        {
            x=x-i;
            i++;
        }
        printf("%lld\n",a[x]);
    return 0;
}

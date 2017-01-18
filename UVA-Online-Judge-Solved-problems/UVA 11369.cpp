#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,a[20000],i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        sort(a,a+n);
        int ans=0;
        for(i=n-3;i>=0;i-=3)
            ans+=a[i];
        printf("%d\n",ans);
    }
    return 0;
}


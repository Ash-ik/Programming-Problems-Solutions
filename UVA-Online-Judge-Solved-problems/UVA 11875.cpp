#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[50],i=1,t,j,n;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++) scanf("%d",&a[j]);
        sort(a,a+n);
        printf("Case %d: %d\n",i++,a[(n-1)/2]);
    }
    return 0;
}

#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int t,n,i,ans,a[10000],temp;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),compare);
        temp=a[n/2];
        for(i=0;i<n;i++) ans+=abs(temp-a[i]);
        printf("%d\n",ans);
    }
    return 0;
}

#include <stdio.h>
#include <set>

using namespace std;

bool pay(multiset<int>H,int x[],int n)
{
    int cost = 0;
    for(int i=0; i<n; i++)
    {
        multiset<int>::iterator j = H.lower_bound(x[i]);
        if (j == H.end()) return false;
        cost += *j;
        H.erase(j);
    }
    printf("%d\n",cost);
    return true;
}

int main()
{
    int n,m,i;
    while(scanf("%d %d",&n,&m)!=EOF && (n+m))
    {
        int a[n];
        multiset<int>data;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        int h;
        for(int i=0; i<m; i++)
            scanf("%d",&h),data.insert(h);

        if (!pay(data,a,n)) puts("Loowater is doomed!");
    }
    return 0;
}

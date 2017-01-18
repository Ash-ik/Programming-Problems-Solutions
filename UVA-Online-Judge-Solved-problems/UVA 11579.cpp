#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
long long t,n,i;
int main()
{
    double a[100000],area,max,s;
    scanf("%lld",&t);
    while(t--)
    {
        max=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lf",&a[i]);
        sort(a,a+n);
        for(i=n-1;i>=2;i--)
        {
            if(a[i]+a[i-1]>=a[i-2] &&a[i-1]+a[i-2]>=a[i] &&a[i]+a[i-2]>=a[i-1])
            {
                s=(double)(a[i]+a[i-1]+a[i-2])/2.0;
                area=sqrt(s*(s-a[i])*(s-a[i-1])*(s-a[i-2])*1.0);
            }
            else area=0;
            if(area>max) max=area;
        }
        printf("%.2lf\n",max);
    }
    return 0;
}

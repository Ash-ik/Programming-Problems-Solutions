#include<stdio.h>
#include<math.h>
#define pi 2*acos(-1)
int main()
{
    double ans,r,n;
    while(scanf("%lf %lf",&r,&n)==2)
    {
        ans=(n*r*r*sin(pi/n))/2;
        printf("%.3lf\n",ans);
    }
    return 0;
}

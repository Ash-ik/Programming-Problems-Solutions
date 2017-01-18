#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define pi acos(-1.0)
int main()
{
    int t,cases=1;
    scanf("%d",&t);
    double l,w,r,circle,dis,curve;
    while(t--)
    {
        scanf("%lf %lf %lf",&l,&w,&r);
        circle=pi*r*r;
        dis=w/2.0;
        dis=dis*2;
        dis=dis*dis;
        curve=(circle-dis)/4.0;
        circle=circle-curve*2.0;
        printf("Case %d: %lf\n",cases++,circle);
    }
    return 0;
}

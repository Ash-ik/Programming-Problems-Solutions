#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double l,r=0,w,rad,area;
        scanf("%lf",&l);
        r=l/5;
        w=(l*6)/10;
        rad=pi*r*r;
        area=(l*w)-rad;
        printf("%.2lf %.2lf\n",rad,area);
    }
    return 0;
}


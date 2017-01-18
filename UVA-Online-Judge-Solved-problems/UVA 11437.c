#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long int n;
    double x1,y1,x2,y2,x3,y3,area;
    scanf("%ld",&n);
            while(n--)
        {
            scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
            area=((x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1)/14.0);
            area= area<0 ? 0-area:area;
            printf("%.0lf\n",area);
        }
    return 0;
}

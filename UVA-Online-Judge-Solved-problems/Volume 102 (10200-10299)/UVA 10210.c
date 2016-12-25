#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double x1,y1,x2,y2,theta1,theta2,ans;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&theta1,&theta2)==6)
    {
        ans=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))*(1.0/(tan((theta1*pi)/180.0))+1.0/(tan((theta2*pi)/180.0)));
        printf("%.3lf\n",ans);
    }
    return 0;
}

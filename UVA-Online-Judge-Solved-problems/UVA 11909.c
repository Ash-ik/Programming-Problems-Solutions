#include<stdio.h>
#include<math.h>
#define rad acos(-1.0)/180
double radian,l,w,h,theta,val;
int main()
{
        while(scanf("%lf %lf %lf %lf",&l,&w,&h,&theta)==4)
        {
            radian=tan(rad*theta);
            val=l*radian;
            if(val>h)
            printf("%.3lf mL\n",(.5*h*h*w)/radian);
            else printf("%.3lf mL\n",w*l*(h-.5*l*radian));
        }
        return 0;
}

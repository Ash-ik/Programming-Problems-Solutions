#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,angle;
        while(scanf("%f:%f",&a,&b)==2 && a!=0)
        {
            angle=fabs(((60*a)-11*b)/2);
            if(angle>180)
            angle=360-angle;
            printf("%.3f\n",angle);
        }
        return 0;
}

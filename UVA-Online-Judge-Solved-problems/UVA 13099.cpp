#include<stdio.h>
int main()
{
    double xl,yl,xr,yr;
    while(scanf("%lf %lf %lf %lf",&xl,&yl,&xr,&yr)!=EOF)
    {
        printf("%lf\n",((xl-xr)*(xl-xr)+(yl-yr)*(yl-yr))/6.0);
    }
    return 0;
}

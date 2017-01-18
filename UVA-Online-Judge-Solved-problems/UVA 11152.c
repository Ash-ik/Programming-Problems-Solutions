#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    int a,b,c;
    double sun,vio,rose,s,tri_area,big_circle,small_circle;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        s=(double)(a+b+c)/2.0;
        tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
        big_circle=(double)(a*b*c)/(double)(4.0*tri_area);
        small_circle=tri_area/(double)s;
        rose=(pi*small_circle*small_circle);
        vio=tri_area-rose;
        sun=(pi*big_circle*big_circle)-tri_area;
        printf("%.4lf %.4lf %.4lf\n",sun,vio,rose);
    }
    return 0;
}

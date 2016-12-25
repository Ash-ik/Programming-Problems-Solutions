#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    while(scanf("%lf %lf",&b,&a)==2)
        printf("%.0lf\n",pow(a,(1/b)));
        return 0;
}

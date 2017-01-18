#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
#define ep 5.14e-7
int main()
{
    long int t;
    double a,b,val,th;
    scanf("%ld",&t);
    while(t--)
    {
            scanf("%lf %lf",&a,&b);
        th=atan2(a,b);
        val=sqrt(a*a+b*b);
         if(th<-ep) th+=2.0*pi;
        printf("%.2lf %.2lf\n",th,val);
    }
    return 0;
}

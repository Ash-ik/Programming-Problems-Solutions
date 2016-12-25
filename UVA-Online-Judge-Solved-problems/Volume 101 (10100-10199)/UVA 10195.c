#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,rad;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a==0.0||b==0.0||c==0.0)
        printf("The radius of the round table is: 0.000\n");
        else
        {
            s=(a+b+c)/2.0;
            rad=sqrt((1.0*(s-a)*(s-b)*(s-c))/s);
        printf("The radius of the round table is: %.3lf\n",rad);
        }
    }
    return 0;
}

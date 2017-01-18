#include<stdio.h>
int main()
{
    double x0,y0,x,y,h,del_y,k1,k2,k3,k4;
    while(1)
    {
        printf("Enter the value of x0:");
        scanf("%lf",&x0);
                printf("Enter the value of y0:");
        scanf("%lf",&y0);
                printf("Enter the value of x:");
        scanf("%lf",&x);
                printf("Enter the value of h:");
        scanf("%lf",&h);
        while(x0!=x)
        {
            k1=h*(x0+y0);
            k2=h*(x0+h/2.0+y0+k1/2.0);
            k3=h*(x0*h/2.0+y0+k2/2.0);
            k4=h*(x0+h+y0+k3);
            del_y=(k1+2*k2+2*k3+k4)/6.0;
            x0=x0+h;
            y0=y0+del_y;
        }
        printf("\n\nfor x=%.4lf y=%.4lf\n\n\n",x0,y0);
    }
    return 0;
}

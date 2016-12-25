#include<stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf",&a)==1)
    {
        b=1.0673956817111818692592637626711*a;
        printf("%.10lf\n",b);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,ans;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        ans=(4.0*sqrt(s*(s-a)*(s-b)*(s-c)))/3.0;
        if(ans>0)
        printf("%.3lf\n",ans);
        else printf("-1.000\n");
    }
    return 0;
}

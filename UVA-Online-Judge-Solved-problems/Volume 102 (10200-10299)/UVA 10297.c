#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    int D,V;
    while(scanf("%d %d",&D,&V) &&!(D==0 &&V==0))
    {
        double ans=pow((D*D*D-(6*V)/pi),0.3333333);
        printf("%.3lf\n",ans);
    }
    return 0;

}

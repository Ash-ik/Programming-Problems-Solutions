#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float x,y,r;
        double dis,p,q;
        scanf("%f %f %f",&x,&y,&r);
        dis=sqrt(x*x+y*y);
        p=r-dis;
        q=r+dis;
        printf("%.2lf %.2lf\n",p,q);
    }
    return 0;
}

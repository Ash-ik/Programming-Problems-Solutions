#include<stdio.h>
#include<stdbool.h>
double distant(double x1,double y1,double x2,double y2)
{
    return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
    int hole;
    double gX,gY,dX,dY,holeX,holeY;
    bool escaped;
    while(scanf("%d %lf %lf %lf %lf",&hole,&gX,&gY,&dX,&dY)!=EOF)
    {
        escaped=false;
        while(hole--)
        {
            scanf("%lf %lf",&holeX,&holeY);
            if(4*distant(gX,gY,holeX,holeY)<=distant(dX,dY,holeX,holeY) && !escaped)
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",holeX,holeY),escaped=true;
        }
        if(!escaped) puts("The gopher cannot escape.");
    }
    return 0;

}

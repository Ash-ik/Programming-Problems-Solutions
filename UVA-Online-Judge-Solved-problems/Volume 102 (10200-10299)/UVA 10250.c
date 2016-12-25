#include<stdio.h>
int main()
{
    double x1,x2,y1,y2;
        while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)==4)
            {
                if(x1==x2&&y1==y2) puts("Impossible.");
                else printf("%.10lf %.10lf %.10lf %.10lf\n",(x1+x2+y1-y2)/2.0,(y1+y2-x1+x2)/2.0,(x1+x2-y1+y2)/2.0,(y1+y2+x1-x2)/2.0);
            }
    return 0;
}

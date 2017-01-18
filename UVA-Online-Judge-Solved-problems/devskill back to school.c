#include<stdio.h>
#include<math.h>
int main()
{
    int cases=0,t;
    double dis,x1,y1,x2,y2,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf",&x1,&y1,&r,&x2,&y2);
        dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("Case %d: ",++cases);
        if(dis==r) puts("OnCircle");
        else if(dis<r) puts("Inside");
        else puts("Outside");
    }
    return 0;
}

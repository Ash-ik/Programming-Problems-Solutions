#include <stdio.h>
#include <math.h>
int main()
{
    int u,v,d;
    int i,cases;
    scanf("%d",&cases);
    for(i=0; i<cases; i++)
    {
        scanf("%d %d %d",&d,&v,&u);
        if(u==0 ||v==0 ||u<=v)
            printf("Case %d: can't determine\n",i+1);
        else
        {
            double t1=0,t2=0;
            t1=d*1.0/u;
            t2=d*1.0/sqrt(u*u-v*v);
            printf("Case %d: %.3f\n",i+1,t2-t1);
        }
    }
    return 0;
}


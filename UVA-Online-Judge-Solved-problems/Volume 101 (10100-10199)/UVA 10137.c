#include<stdio.h>
int main()
{
    int i,p;
    double avg,pos,neg,sum;
    while(scanf("%d",&p) &&p)
    {
        double a[p+2];
        sum=pos=neg=0.0;
        for(i=0;i<p;i++)
        {
            scanf("%lf",&a[i]);
            sum+=a[i];
        }
        sum=sum/p;
        for(i=0;i<p;i++)
        {
            avg=(int)((sum-a[i])*100.0)/100.0;
            if(avg<0) neg-=avg;
            else
                pos+=avg;
        }
        if(pos<neg) pos=neg;
        printf("$%.2lf\n",pos);
    }
    return 0;
}

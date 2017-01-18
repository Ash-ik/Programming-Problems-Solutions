#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,i=1,ans2,x;
    double avg,sum,a,ans1;
    scanf("%d",&t);
    while(i<=t)
    {
        sum=0;
        for(x=0;x<12;x++)
        {
            scanf("%lf",&a);
            sum+=a;
        }
        avg=sum/12.0;
        if(avg>999)
        {
            ans1=fmod(avg,1000);
            ans2=avg/1000;
        printf("%d $%d,%.2lf\n",i++,ans2,ans1);
        }
        else printf("%d $%.2lf\n",i++,avg);
    }
    return 0;
}

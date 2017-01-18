#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        double in_avg=0,desired_avg=0;
        int in_num=0,remaining_num=0;
        scanf("%lf %lf %d %d",&in_avg,&desired_avg,&in_num,&remaining_num);
        double ans=(((in_num+remaining_num)*desired_avg)-(in_num*in_avg))/remaining_num;
        if(ans<0.0 ||ans>10.0)
        printf("Case #%d: Impossible\n",i);
        else printf("Case #%d: %.2lf\n",i,ans);
    }
    return 0;
}

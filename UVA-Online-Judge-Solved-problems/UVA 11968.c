#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long a[100000],x,cake,t,coke,i=1,j,temp_cake,temp_coke,p,all,sum;
    double min,avg;
    scanf("%lld",&t);
    while(i<=t)
    {
        sum=0;
        scanf("%lld %lld %lld",&all,&cake,&coke);
        for(x=0;x<all;x++)
        {
            scanf("%lld",&a[x]);
            sum+=a[x];
        }
        avg=(sum*1.0)/all;
        min=fabs(avg-a[0]);
        temp_cake=0;
        for(x=1;x<cake;x++)
        {
            if(fabs(avg-a[x])<min)
            {
                min=fabs(avg-a[x]);
                temp_cake=x;
            }
            else if(fabs(avg-a[x])==min)
            if(a[temp_cake]>a[x])
            temp_cake=x;
        }
        min=fabs(avg-a[cake]);
        temp_coke=cake;
        for(x=cake+1;x<cake+coke;x++)
        {
            if(fabs(avg-a[x])<min)
            {
                min=fabs(avg-a[x]);
                temp_coke=x;
            }
            else if(fabs(avg-a[x])==min)
            if(a[temp_coke]>a[x])
            temp_coke=x;
        }
        printf("Case #%lld: %lld %lld\n",i++,a[temp_cake],a[temp_coke]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int p,t,i=1,temp,min_time,h,m,x,b,sth,stm,strt,time;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d %d:%d",&b,&sth,&stm);
        strt=60*sth+stm;
        for(x=1;x<=b;x++)
        {
            scanf("%d:%d %d",&h,&m,&time);
            p=h*60+m-strt;
            if(p<0) p+=1440;
            temp=p+time;
            if(x==1) min_time=temp;
            else if(temp<min_time)
                min_time=temp;
        }
        printf("Case %d: %d\n",i++,min_time);
    }
    return 0;
}

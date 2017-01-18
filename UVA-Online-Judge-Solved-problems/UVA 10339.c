#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,min,hr,time,dif,p,q;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        dif=a-b;
        if(dif<0)
            dif*=-1;
        if(dif==0)
        printf("%lld %lld 12:00\n",a,b);
        else
        {
            p=43200*(86400-a);
            q=60*dif;
            time=p/q;
            if((p%q)*2>=q)
            time++;
            hr=(time/60)%12;
            if(!hr) hr=12;
            min=time%60;
            printf("%lld %lld %02lld:%02lld\n",a,b,hr,min);
        }
    }
    return 0;
}

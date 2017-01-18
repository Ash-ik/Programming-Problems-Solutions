#include<stdio.h>
int main()
{
    long long a,b,i,n[100000],flag,temp,d=1,p;
    while(scanf("%lld %lld",&a,&b)==2 &&(a+b))
    {
        for(i=1;i<=a;i++) scanf("%lld",&n[i]);
        for(i=1;i<=b;i++)
        {
            flag=0;
            scanf("%lld",&temp);
            if(i==1)
            printf("CASE# %lld:\n",d++);
            for(p=1;p<=a;p++)
            if(n[p]==temp) {flag=1;printf("%lld found at %lld\n",temp,p);break;}
            if(flag!=1) printf("%lld not found\n",temp);
        }
    }
}

#include<stdio.h>
int main()
{
    int w1,w2,m1,m2,hw1,mw1,hw2,mw2,hm1,mm1,hm2,mm2,i=1,t;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d:%d %d:%d",&hw1,&mw1,&hw2,&mw2);
        scanf("%d:%d %d:%d",&hm1,&mm1,&hm2,&mm2);
        w1=hw1*60+mw1;
        w2=hw2*60+mw2;
        m1=hm1*60+mm1;
        m2=hm2*60+mm2;
        if((m1>=w1 && m1<=w2)||(m2>=w1 &&m2<=w2) ||(m1>=w1 &&m2<=w2)||(m1<=w1 &&m2>=w2)) printf("Case %d: Mrs Meeting\n",i++);
        else printf("Case %d: Hits Meeting\n",i++);
    }
    return 0;
}

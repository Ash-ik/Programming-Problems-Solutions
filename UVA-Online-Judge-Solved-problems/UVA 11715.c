#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,t,a,s;
    int n,i=0;
while(scanf("%d",&n)==1 && n!=0 &&++i)
{
    switch(n)
    {
        case 1:scanf("%lf %lf %lf",&u,&v,&t);
        a=(v-u)/t;
        s=(v*v-u*u)/(2*a);
        printf("Case %d: %.3lf %.3lf\n",i,s,a);
        break;
        case 2:scanf("%lf %lf %lf",&u,&v,&a);
        s=(v*v-u*u)/(2*a);
        t=(v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",i,s,t);
        break;
        case 3:scanf("%lf %lf %lf",&u,&a,&s);
        v=pow((u*u+2*a*s),.5);
        t=(v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",i,v,t);
        break;
        case 4:scanf("%lf %lf %lf",&v,&a,&s);
        u=pow((v*v-2*a*s),.5);
        t=(v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",i,u,t);
        break;
        default:break;
    }
}
    return 0;
}

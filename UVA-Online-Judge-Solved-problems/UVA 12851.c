#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    int i=1,d,v,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&d,&v);
        double ans=sqrt((3384*v)/(7*pi*d))*2;
        printf("Case %d: %.3lf\n",i++,ans);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,ans;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4 && (h1!=0 ||m1!=0 ||h2!=0 ||m2!=0))
    {
        ans=(h2-h1)*60+(m2-m1);
        if(ans<0)
        ans=ans+1440;
        printf("%d\n",ans);
    }
    return 0;
}

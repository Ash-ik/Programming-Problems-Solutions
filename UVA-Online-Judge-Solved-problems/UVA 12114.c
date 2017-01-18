#include<stdio.h>
int main()
{
    long long s,b,x=0;
    while(scanf("%lld %lld",&b,&s)==2 && !(b<=0 &&s<=0))
    {
        x++;
        if(b==0 ||b==1)
        printf("Case %lld: :-\\\n",x);
        else if(b<=s)
        printf("Case %lld: :-|\n",x);
        else if(b>s)
        printf("Case %lld: :-(\n",x);
    }
    return 0;
}

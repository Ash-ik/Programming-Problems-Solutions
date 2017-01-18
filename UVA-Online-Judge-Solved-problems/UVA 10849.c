#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long i,t,n,pos1,pos2,x1,y1,x2,y2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&i);
    scanf("%lld",&n);
    while(i--)
    {
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        pos1=x1+y1;
        pos2=x2+y2;
        if(x1>n ||x2>n ||y1>n ||y2>n || (pos1%2==0&&pos2%2!=0)||(pos1%2!=0 &&pos2%2==0))
        printf("no move\n");
        else if(x1==x2 &&y1==y2) printf("0\n");
        else if(abs(x1-x2)==abs(y1-y2))
        printf("1\n");
        else printf("2\n");
    }
    }
    return 0;
}

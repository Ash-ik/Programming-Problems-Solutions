#include<stdio.h>
#include<math.h>
unsigned long long x,n,ans;
int main()
{
    while(scanf("%llu %llu",&n,&x)==2)
    {
        ans=((n*powl(x,n+2)-(n+1)*powl(x,n+1)+x)/((x-1)*(x-1)));
        printf("%llu\n",ans);
    }
    return 0;
}

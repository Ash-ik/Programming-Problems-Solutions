#include<stdio.h>
#include<math.h>
int main()
{
    long long i=1,t,sal,tax;
    scanf("%lld",&t);
    while(i<=t)
    {
        scanf("%lld",&sal);
        if(sal<=180000)
        tax=0;
        else if(sal<=200000)
        tax=2000;
        else if(sal<=480000)
        tax=ceil((sal-180000)*.1);
        else if(sal<=880000)
        tax=ceil(((sal-480000)*.15)+30000);
        else if(sal<=1180000)
        tax=ceil(((sal-880000)*.20)+90000);
        else tax=ceil((sal-1180000)*.25+150000);
        printf("Case %lld: %lld\n",i++,tax);
    }
    return 0;
}

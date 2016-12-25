#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef unsigned long long int ULL;
int main()
{
    ULL a,b,i;
    long double ans;
    char x[1000];
    while(gets(x))
    {
        sscanf(x,"%llu %llu",&a,&b);
        ans=0.0;
        for(i=a;i>a-b;i--) ans+=log10(i);
        for(i=b;i>0;i--)   ans-=log10(i);

        printf("%d\n",(int)floor(ans)+1);
    }
    return 0;
}

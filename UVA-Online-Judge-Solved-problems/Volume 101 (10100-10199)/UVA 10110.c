#include<stdio.h>
#include<math.h>
int main()
{
    long double x;
    unsigned long long a,n;
    while(scanf("%llu",&n)==1  &&n!=0)
    {
        x=sqrt(n);
        a=x;
        if(a==x)
        printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

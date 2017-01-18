#include<stdio.h>
int main()
{
    long long a,b,i=1,t;
    scanf("%lld",&t);
    while(i<=t)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
        printf(">\n");
        else if(a<b)
        printf("<\n");
        else
        printf("=\n");
        i++;
    }
    return 0;
}

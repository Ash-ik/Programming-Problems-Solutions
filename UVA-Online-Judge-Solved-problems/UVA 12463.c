#include<stdio.h>
int main()
{
    unsigned long long a,b,c,d,e;
    while(scanf("%llu %llu %llu %llu %llu",&a,&b,&c,&d,&e)==5 &&(a+b+c+d+e))
        printf("%llu\n",a*b*c*d*d*e*e);
    return 0;
}

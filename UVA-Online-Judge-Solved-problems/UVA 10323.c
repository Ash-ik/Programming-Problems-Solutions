#include <stdio.h>
long long fact(int x)
{
    if(x==0)
        return 1;
    return x*fact(x-1);
}
int main()
{
    int a;
    while(scanf("%d", &a)==1)
    {
        if(a>7 && a<14)
            printf("%lld\n",fact(a));
        else if((a<8 &&a>-1) ||(a<0 && a%2==0))
            printf("Underflow!\n");
        else printf("Overflow!\n");
    }
    return 0;
}

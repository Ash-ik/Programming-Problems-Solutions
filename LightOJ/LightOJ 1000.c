#include<stdio.h>
int main()
{
    int a,b,cases=1,t;
    scanf("%d",&t);
    while(t--)
        scanf("%d %d",&a,&b),printf("Case %d: %d\n",cases++,a+b);
    return 0;
}

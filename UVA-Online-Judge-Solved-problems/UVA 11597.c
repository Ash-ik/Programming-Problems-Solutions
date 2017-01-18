#include<stdio.h>
int main()
{
    int a,i=0;
    while(scanf("%d",&a) &&a)
            printf("Case %d: %d\n",++i,a>>1);
            return 0;
}

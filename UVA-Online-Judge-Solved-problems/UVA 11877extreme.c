#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1 &&n)
        printf("%d\n",n>>1);
    return 0;
}

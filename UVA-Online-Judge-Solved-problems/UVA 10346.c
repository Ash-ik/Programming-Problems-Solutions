#include<stdio.h>
int main()
{
    int n,k,temp;
    while(scanf("%d %d",&n,&k)!=EOF)
        printf("%d\n",((n-1)*k+1)/(k-1));
    return 0;
}

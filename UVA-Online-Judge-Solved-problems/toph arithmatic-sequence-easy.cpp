#include<stdio.h>
int main()
{
    int ans=0,n,t,x;
    scanf("%d",&n);
    ans=n*(n+1)/2;
    scanf("%d",&t);
    while(t--)
        scanf("%d",&x),ans=ans-x;
    printf("%d\n",ans);
    return 0;
}

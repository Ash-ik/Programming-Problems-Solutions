#include<stdio.h>
int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int n,m,ans=0;
        scanf("%d %d",&n,&m);
        while(n>=m)
        {
            n=n-m+1;
            ans++;
        }
        if(n==1)
        printf("%d\n",ans);
        else printf("cannot do this\n");
    }
    return 0;
}

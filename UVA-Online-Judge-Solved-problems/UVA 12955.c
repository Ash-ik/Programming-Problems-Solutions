#include<stdio.h>
int main()
{
    int fact[9]={1,1,2,6,24,120,720,5040,40320};
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans=0;
        for(i=8;i>=1;i--)
        {
            while(fact[i]<=n)
            {
                n=n-fact[i];
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

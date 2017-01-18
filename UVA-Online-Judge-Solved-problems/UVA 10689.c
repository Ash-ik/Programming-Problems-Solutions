#include<stdio.h>
int main()
{
    int testCase,mod[5]={1,10,100,1000,10000};
    scanf("%d",&testCase);
    while(testCase--)
    {
        int m,a,b,i,n;
        scanf("%d %d %d %d",&a,&b,&n,&m);
                m=mod[m];
                n=n%15000;
                int ans[n+2];
                ans[0]=a%m;
                ans[1]=b%m;

            for(i=2;i<=n;i++)
            ans[i]=(ans[i-1]+ans[i-2])%m;

        printf("%d\n",ans[n]);
    }
    return 0;
}

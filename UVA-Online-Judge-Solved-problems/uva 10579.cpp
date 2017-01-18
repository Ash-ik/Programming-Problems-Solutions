#include<stdio.h>
int ans[4787][1001];
void fib()
{
    int i,j;
    ans[0][1000]=0;ans[1][1000]=ans[2][1000]=1;
    for(i=3;i<=4786;i++)
    {
        for(j=1000;j>=0;j--)
        {
            ans[i][j]+=ans[i-1][j]+ans[i-2][j];
            if(ans[i][j]>9)
            {
                ++ans[i][j-1];
                ans[i][j]%=10;
            }
        }
    }
}
int main()
{
    fib();
    int num,i,j;
    while(scanf("%d",&num)==1)
    {
        for(i=0;;i++)
            if(ans[num][i]!=0)
                break;
            for(j=i;j<=1000;j++)
                printf("%d",ans[num][j]);
            printf("\n");
    }
    return 0;
}

#include<stdio.h>
int ans[1004][212];
void fib()
{
    int i,j;
    ans[0][210]=0;ans[1][210]=ans[2][210]=1;
    for(i=3;i<=1002;i++)
    {
        for(j=210;j>=0;j--)
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
        num+=2;
        for(i=0;;i++)
            if(ans[num][i]!=0)
                break;
            for(j=i;j<=210;j++)
                printf("%d",ans[num][j]);
            printf("\n");
    }
    return 0;
}

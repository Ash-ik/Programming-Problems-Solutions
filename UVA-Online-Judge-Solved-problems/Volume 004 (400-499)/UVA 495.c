#include<stdio.h>
int ans[5002][1202];
void fib()
{
    int i,j;
    ans[0][1200]=0;ans[1][1200]=ans[2][1200]=1;
    for(i=3;i<=5000;i++)
    {
        for(j=1200;j>=0;j--)
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
        if(num==0)
        {
            printf("The Fibonacci number for 0 is 0\n");
            continue;
        }
        for(i=0;;i++)
            if(ans[num][i]!=0)
                break;
                printf("The Fibonacci number for %d is ",num);
            for(j=i;j<=1200;j++)
                printf("%d",ans[num][j]);
            printf("\n");
    }
    return 0;
}


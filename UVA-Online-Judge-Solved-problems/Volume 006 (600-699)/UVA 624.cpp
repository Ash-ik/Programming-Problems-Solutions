#include<stdio.h>
int maxi(int i,int j)
{
    if(i>j) return i;
    else return j;
}
int main()
{
    int i,j,k,n;
    while(scanf("%d %d",&k,&n)!=EOF)
    {
        int a[25]={},knapsack[25][3000]={},visited[25][3000]={};

        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);

        for(i = 0; i <= n; i++)
            for(j = 0; j <= k; j++)

            {

                if(!i||!j)
                    knapsack[i][j]=0;

                else if(j>=a[i])
                {

                    knapsack[i][j] =maxi(knapsack[i-1][j], knapsack[i-1][j-a[i]] + a[i]);
                    if(knapsack[i][j] != knapsack[i-1][j])visited[i][j] = 1;
                }
                else
                    knapsack[i][j]=knapsack[i-1][j];
            }
        int sum=k;
        for(i=n; i>0; i--)
            if(visited[i][k])
            {
                printf("%d ",a[i]);
                k=k-a[i];
            }
        printf("sum:%d\n",knapsack[n][sum]);
    }
    return 0;


}

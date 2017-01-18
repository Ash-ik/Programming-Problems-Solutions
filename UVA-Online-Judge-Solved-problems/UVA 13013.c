#include<stdio.h>
#include<string.h>
#define MOD 1000000007
#define MAX 5005
#define pc putchar
long long dp[MAX][MAX]={1},ans[MAX][MAX],sum;
    char in1[20];


#define getchar_unlocked getchar
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

void solve()
{
    int i,j;
    for(i=1;i<MAX;i++)
    {
        dp[i][0]=ans[i][0]=sum=1;
        for(j=1;j<=i;j++)
        {
            dp[i][j]=((j+1)*dp[i-1][j]+(i-j)*dp[i-1][j-1])%MOD;
            sum=(sum+dp[i][j])%MOD;
            ans[i][j]=sum;
        }
    }

}
int main()
{
    solve();
    int n,q,k;
    while(gets(in1))
    {
        n=atoi(strtok(in1," "));
        q=atoi(strtok(NULL," "));

        while(q--)
        {

            scan_positive_int(&k);
            if(n<k) k=n;
            printf("%d",ans[n][k-1]);

            if(q)
            pc(' ');
        }
        pc('\n');
    }
    return 0;
}

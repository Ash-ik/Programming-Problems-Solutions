#include <stdio.h>
#define read freopen("dataN.txt","r",stdin)
#define MAXN 512
int g[MAXN][MAXN];
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}

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

int main() {
	int n, m,i,j;
	while (scan_positive_int(&n) &&n) {
            scan_positive_int(&m);
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++)
				scan_positive_int(&g[i][j]);
		}

		int gc[MAXN] = {};
		for (i = 1; i <= m; i++) {
			int dp[MAXN] = {};
			for (j = 1; j <= n; j++)
				dp[j] = max(dp[j-1], (j-2 >= 0 ? dp[j-2] : 0) + g[j][i]);
			for (j = 1; j <= n; j++)
				gc[i] = max(gc[i], dp[j]);
		}

		int dp[MAXN] = {}, ret = 0;
		for (i = 1; i <= m; i++) {
			dp[i] = max(dp[i-1], (i-2 >= 0 ? dp[i-2] : 0) + gc[i]);
			ret = max(ret, dp[i]);
		}
		printf("%d\n", ret);
	}
	return 0;
}


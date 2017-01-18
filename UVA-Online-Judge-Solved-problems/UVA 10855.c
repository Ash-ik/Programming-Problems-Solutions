#include<stdio.h>
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
int n,m;
char bigSquare[110][110],smallSquare[110][110],temp[110][110];

int countMatch()
{
    int i,j,k,l,p,q,ans=0,counts;
    for(i=0; i<=n-m; i++)
        for(j=0; j<=n-m; j++)
                {
                    counts=0;
                    for(p=0; p<m; p++)
                        for(q=0; q<m; q++)
                        {
                            if(bigSquare[i+p][j+q]==smallSquare[p][q])
                            {
                                counts++;
                            }
                            else break;
                        }
                        if(counts==m*m)
                            ans++;
                }
    return ans;
}
void rotate()
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            temp[i][j]=smallSquare[m-j-1][i];
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            smallSquare[i][j]=temp[i][j];
}
int main()
{
    int i;
    while(scanf("%d %d",&n,&m) && (n+m))
    {
        getchar();
        for(i=0; i<n; i++)
            gets(bigSquare[i]);
        for(i=0; i<m; i++)
            gets(smallSquare[i]);
        for(i=0; i<4; i++)
        {
            if(i) putchar(' ');
            printf("%d",countMatch());
            rotate();
        }
        puts("");
    }
    return 0;
}

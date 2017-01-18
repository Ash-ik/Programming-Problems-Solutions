#include<stdio.h>
int main()
{
    int m,n,ans[302][302];
    for(m=1;m<=300;m++)
        for(n=1;n<=300;n++)
        ans[m][n]=m*n-1;

        while(scanf("%d %d",&m,&n)==2)
    printf("%d\n",ans[m][n]);
    return 0;
}

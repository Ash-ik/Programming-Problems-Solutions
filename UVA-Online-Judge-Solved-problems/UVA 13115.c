#include<stdio.h>
#include<math.h>
#define read freopen("dataN.txt","r",stdin)
int main()
{
    int i,j,t,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int data[3][32][32]={},flag=0,m=sqrt(n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                scanf("%d",&x);
                if(data[0][i][x]||data[1][j][x]||data[2][i/m*m+j/m][x])
                    flag=1;

                data[0][i][x]++;
				data[1][j][x]++;
				data[2][i/m*m+j/m][x]++;
            }
            if(flag) puts("no");
            else puts("yes");
    }
    return 0;
}

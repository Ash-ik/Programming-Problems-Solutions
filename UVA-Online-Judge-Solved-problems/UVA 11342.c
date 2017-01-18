#include<stdio.h>
int main()
{

            int i,j,k,ok[50000+3],ans[50000+3][3];
        for(i=0;i*i<=50000;i++)
            for(j=i;i*i+j*j<=50000;j++)
            for(k=j;i*i+j*j+k*k<=50000;k++)
        {
            int temp=i*i+j*j+k*k;
            if(!ok[temp])
            {
                ans[temp][0]=i;
                ans[temp][1]=j;
                ans[temp][2]=k;
                ok[temp]=1;
            }
        }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
            if(ok[n]==0) printf("-1\n");
            else
                printf("%d %d %d\n",ans[n][0],ans[n][1],ans[n][2]);
    }
    return 0;
}

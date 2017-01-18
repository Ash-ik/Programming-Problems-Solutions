#include<stdio.h>
#include<stdbool.h>

bool symmetric(long matrix[101][101],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(matrix[i][j]!=matrix[n-i-1][n-j-1])
            return false;
    return true;
}
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        getchar();
        int n,j,k;
        long a[101][101]={};
        bool ok=true;
        char x[3];
        scanf("%s %s %d",x,x,&n);

        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
        {
            scanf("%ld",&a[j][k]);
            if(a[j][k]<0) ok=false;
        }
        if(ok==true && symmetric(a,n)==true) printf("Test #%d: Symmetric.\n",i);
        else printf("Test #%d: Non-symmetric.\n",i);
    }
    return 0;
}

#include<stdio.h>
#define read freopen("dataN.txt","r",stdin)
int main()
{
    int i,j,n;
    while(scanf("%d",&n)  &&n)
    {
        int x,rowSum[101]={},colSum[101]={},rowOdd=0,colOdd=0,countsRow=0,countsCol=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&x);
                colSum[j]=colSum[j]+x;
                rowSum[i]=rowSum[i]+x;
            }
        }
        for(i=0;i<n;i++)
        {
            if(colSum[i]%2) countsCol++;
            if(countsCol==1 &&!colOdd) colOdd=i;
            if(rowSum[i]%2) countsRow++;
            if(countsRow==1 &&!rowOdd) rowOdd=i;
        }
        if(countsRow==1 &&countsCol==1) printf("Change bit (%d,%d)\n",rowOdd+1,colOdd+1);
        else if(!countsRow &&!countsCol) printf("OK\n");
        else printf("Corrupt\n");
    }
    return 0;
}

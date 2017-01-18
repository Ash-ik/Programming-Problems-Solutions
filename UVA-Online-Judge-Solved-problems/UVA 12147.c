#include<stdio.h>
#include<string.h>
int maxi(int x,int y)
{
    return x^((x^y)&-(x<y));
}

int lcs(char x[],char y[],int k)
{
    int lenX=strlen(x),lenY=strlen(y);
    int i,j,p,ans[lenX+1][lenY+1],temp[lenX+1][lenY+1];

    for(i=0;i<=lenX;i++)
        {
            ans[i][0]=temp[i][0]=0;
        }
    for(i=0;i<=lenY;i++)
        {
            ans[0][i]=temp[0][i]=0;
        }

    for(i=1;i<=lenX;i++)
        for(j=1;j<=lenY;j++)
    {
        if(x[i-1]==y[j-1])
        temp[i][j]=1+temp[i-1][j-1];
    else
        temp[i][j]=0;
    }
    for(i=1;i<=lenX;i++)
        for(j=1;j<=lenY;j++)
        {
            ans[i][j]= maxi(ans[i-1][j],ans[i][j-1]);

            for(p=k;p<=temp[i][j];p++)
                ans[i][j]=maxi(ans[i][j],ans[i-p][j-p]+p);
        }
        return ans[lenX][lenY];
}

int main()
{

    char a[1002];
    char b[1002];
    int x;
    while(scanf("%d\n",&x) &&x)
    {
            gets(a);
            gets(b);
            printf("%d\n",lcs(a,b,x));
    }
    return 0;
}



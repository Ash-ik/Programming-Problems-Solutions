#include<stdio.h>
#include<string.h>

int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}

int lcs(char x[],char y[],int lenX,int lenY)
{
    int i,j,ans[lenX+1][lenY+1];
    for(i=0;i<=lenX;i++)
        for(j=0;j<=lenY;j++)
    {
        if(i==0||j==0)
            ans[i][j]=0;
        else if(x[i-1]==y[j-1])
        ans[i][j]=1+ans[i-1][j-1];
    else
        ans[i][j]= maxi(ans[i-1][j],ans[i][j-1]);
    }
    return ans[lenX][lenY];
}

int main()
{
    char a[1002];
    char b[1002];
    while(gets(a))
    {
            if(strlen(a)==0) return 0;
            gets(b);
            printf("%d\n",lcs(a,b,strlen(a),strlen(b)));
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}

int lcs(char x[],char y[])
{
    int lenX=strlen(x),lenY=strlen(y);
    char lcsChar[lenX+1][lenY+1];
    int i,j,ans[lenX+1][lenY+1];
    for(i=0;i<=lenX;i++)
        for(j=0;j<=lenY;j++)
    {
        if(i==0||j==0)
            ans[i][j]=0;
        else if(x[i-1]==y[j-1])
        {
            ans[i][j]=1+ans[i-1][j-1];
        }
    else
        ans[i][j]= maxi(ans[i-1][j],ans[i][j-1]);
    }

    for(i=0;i<=lenX;i++)
        if(lcsChar[i])
        printf("%c",x[i]);
    puts("");
            return ans[lenX][lenY];
}
int main()
{
    int i,j,cases,t,len;
    char in[102],rev[102];
    scanf("%d\n",&t);
    for(cases=1;cases<=t;cases++)
    {
        gets(in);
        len=strlen(in);
        for(i=len-1,j=0;i>=0;i--,j++)
            rev[j]=in[i];
            rev[j]='\0';
        printf("Case %d: %d\n",cases,len-lcs(in,rev));
    }
    return 0;
}

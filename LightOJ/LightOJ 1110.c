#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int cases;
void lcs(char x[],char y[])
{
    int lenX=strlen(x),lenY=strlen(y);
    int i,j,ans[lenX+1][lenY+1];
    for(i=0;i<=lenX;i++)
        for(j=0;j<=lenY;j++)
    {
        if(i==0||j==0)
            ans[i][j]=0;
        else if(x[i-1]==y[j-1])
            ans[i][j]=1+ans[i-1][j-1];
        else if(ans[i-1][j]>ans[i][j-1])
        {
            ans[i][j]=ans[i-1][j];
        }
        else if(ans[i][j-1]>ans[i-1][j])
        {
            ans[i][j]=ans[i][j-1];
        }
        else
        {
            if(x[i-1]<y[j])
                ans[i][j]=ans[i-1][j];
            else
                ans[i][j]=ans[i][j-1];
        }
    }
    int index=ans[lenX][lenY];
    if(index==0)
        puts(":(");
    else
    {
        char lcs[index+1];
        lcs[index] = '\0';

        i=lenX,j=lenY;
   while(i>0&&j>0)
   {
      if(x[i-1]==y[j-1])
      {
          --i,--j,--index;
          lcs[index]=x[i];
      }
      else if (ans[i-1][j]>ans[i][j-1])
         i--;
      else
         j--;
   }
    printf("Case %d: %s\n",cases,lcs);
}

}
int main()
{
    int i,j,t,len;
    char in1[102],in2[102];
    scanf("%d\n",&t);
    for(cases=1;cases<=t;cases++)
    {
        scanf("%s",in1);
        scanf("%s",in2);
        len=strlen(in1);
        lcs(in1,in2);
    }
    return 0;
}


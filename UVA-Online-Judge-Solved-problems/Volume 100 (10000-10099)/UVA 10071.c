#include<stdio.h>
int a[10000][10000];
int main()
{
int v,t,i,j;
for(i=0;i<=100;i++)
for(j=0;j<=200;j++)
a[i][j]=2*i*j;
while (scanf("%d %d",&v,&t)==2)
{
    if(v<0 && t)
    {
        v=0-v;
        printf("-%d\n",a[v][t]);
    }
    else if(t==0)
        printf("0\n");
    else
        printf("%d\n",a[v][t]);
}
return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare1(const void *a,const void *b)
{
    return ( *(char*)a-*(char*)b);
}
int compare2(const void *a,const void *b)
{
    return ( *(int*)a-*(int*)b);
}
int main()
{
    char a[100000],c[1000][10000];
    int i,j,n,p,ans,val[10000],x,m;
    while(scanf("%s",a)==1)
    {
        x=0;
        ans=1;
        n=strlen(a);
        qsort(a,n,sizeof(char),compare1);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            ans++;
            else
            {
                m=a[i-1];
                sprintf(c[ans],"%d %d",m,ans);
                val[x++]=ans;
                ans=1;
            }
        }
        qsort(val,x,sizeof(int),compare2);
        for(i=0;i<x;i++)
        printf("%s\n",c[i]);
        printf("\n");
    }
    return 0;
}

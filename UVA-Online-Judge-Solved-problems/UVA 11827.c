#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int temp[100009]={},i,j,ans=0;
        char a[100009];
        gets(a);
        char *z;
        for(i=0,z=strtok(a," ");z;i++,z=strtok(NULL," "))
        {
            temp[i]=atoi(z);
            if(temp[i]>ans)
            for(j=0;j<i;j++)
            ans=max(ans,gcd(temp[i],temp[j]));
        }
        printf("%d\n",ans);
    }
    return 0;
}

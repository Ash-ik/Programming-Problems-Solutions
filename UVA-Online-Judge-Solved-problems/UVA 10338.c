#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char compare(const void*a,const void *b)
{
    return (*(char*)a-*(char*)b);
}
char a[10000];
int main()
{
    long long f,t,temp,p,i,ans,x,j;
    long long fact[20000];
    for(i=1;i<=20;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        f*=j;
        fact[i]=f;
    }
    scanf("%lld",&t);
    for(p=1;p<=t;p++)
    {
        ans=1;
        scanf("%s",a);
        x=strlen(a);
        qsort(a,x,sizeof(a),&compare);
        for(i=0;i<x;i++)
        {
            temp=0;
            while(a[i++]==a[i]) temp++;
            ans*=temp;
        }
        printf("Data set %lld: %lld\n",p,fact[x]/ans);
    }
    return 0;
}

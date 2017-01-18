#include<stdio.h>
#include<string.h>
char n[1000000];
int main()
{
    long long ans,p,flag,t,i,j,a[20];
    scanf("%lld",&t);
    while(t--)
    {
        flag=0;
        scanf("%s %lld",n,&i);
        for(j=0;j<i;j++)
        {
            scanf("%lld",&a[j]);
            ans=0;
            for(p=0;p<strlen(n);p++)
            ans=(ans*10+n[p]-'0')%a[j];
            if(ans==0)
                continue;
            else flag=1;
        }
        if(!flag) printf("%s - Wonderful.\n",n);
        else printf("%s - Simple.\n",n);
    }
    return 0;
}

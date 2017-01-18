#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000];
    unsigned long long ans,degree,i,sum;
    while(scanf("%s",a)==1 && !(strlen(a)==1 &&a[0]=='0'))
    {
        degree=1,sum=0;
        for(i=0;i<strlen(a);i++)
            sum+=a[i]-'0';
        if(sum%9)
        printf("%s is not a multiple of 9.\n",a);
        else
        {
            while(sum>9)
        {
            ans=0;
            sprintf(b,"%llu",sum);
            for(i=0;i<strlen(b);i++)
            ans+=b[i]-'0';
            sum=ans;
            degree++;
        }
        printf("%s is a multiple of 9 and has 9-degree %llu.\n",a,degree);
        }
    }
    return 0;
}

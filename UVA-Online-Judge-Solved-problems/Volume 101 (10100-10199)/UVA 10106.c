#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

    char a[100000],b[100000];
    int num1[100000],num2[100000],p,q;
    long long x,ans,sum,i,j,n,pro;
    while(scanf("%s %s",&a,&b)==2)
    {
        p=strlen(a);q=strlen(b);
        for(i=0;i<p;i++)num1[i]=(int)a[i]-48;
    for(i=0;i<q;i++)num2[i]=(int)b[i]-48;
        ans=0,x=0;
        for(i=q;i>=0;i--)
        {
            sum=0;
            n=0;
            for(j=p;j>=0;j--)
            {
                pro=num2[i]*num1[j];
                    sum=sum+pro*pow(10,n);
                    n++;
            }
            ans=ans+sum*pow(10,x);
            x++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}

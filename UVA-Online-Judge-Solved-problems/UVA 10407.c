#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
int abs(int a)
{
    if(a<0)
        return -a;
    return a;
}
int main()
{
    while(1)
    {
        int p;
        scanf("%d",&p);
        if(p==0)
            break;
        else
        {
            int a[1001];
            int i=0,j,k,ans=0;
            a[i++]=p;
            while(scanf("%d",&p) &&p)
                a[i++]=p;
            for(j=1;j<i;j++)
                {
                    p=abs(a[j]-a[j-1]);
                    if(p)
                    ans=gcd(p,ans);
                }
                ans=gcd(ans,abs(a[0]-a[i-1]));
                printf("%d\n",ans);
        }
    }
    return 0;
}

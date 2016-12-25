#include<stdio.h>
int main()
{
    unsigned long long a,b,flag,i,ans,y;
    while(scanf("%llu %llu",&a,&b)==2 &&!(a==0 &&b==0))
    {
        flag=0,ans=0;
        while(a||b)
        {
            flag=(a%10+b%10+flag)/10;
                ans+=flag;
            a/=10;b/=10;
        }
        if(!(ans^1))
        printf("1 carry operation.\n");
        else if(ans)
        printf("%llu carry operations.\n",ans);
        else printf("No carry operation.\n");
        }
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(long long num)
{
    int sRoot,i;
    if(num<=1)
        return false;
    if(num==2)
        return true;
    if(num%2==0)
        return false;
    sRoot=sqrt(num*1.0);
    for(i=3;i<=sRoot;i+=2)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    long long ans,a,i,flag;
    while(scanf("%lld",&a) &&a!=0)
    {
        ans=0;
        flag=0;
        if(prime(a-2))
        ans++;
        for(i=3;i<=a/2;i++)
        {
            if(prime(i))
                if(prime(a-i))
                        ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}

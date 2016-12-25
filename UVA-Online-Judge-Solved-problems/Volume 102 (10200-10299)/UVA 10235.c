#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int num)
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
    long long n,temp,t;
    while(scanf("%lld",&n)==1)
    {
        if(prime(n))
        {
            t=n;
            temp=0;
            while(t!=0)
            {
                temp=temp*10+t%10;
                t/=10;
            }
            if(prime(temp) &&temp!=n) printf("%lld is emirp.\n",n);
            else printf("%lld is prime.\n",n);
        }
        else printf("%lld is not prime.\n",n);
    }
    return 0;
}

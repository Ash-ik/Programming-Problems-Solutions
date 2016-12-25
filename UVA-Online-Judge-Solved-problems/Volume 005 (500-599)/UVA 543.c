#include<stdio.h>
#include<math.h>
#include<stdbool.h>
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
    long long a,i,flag;
    while(scanf("%lld",&a) &&a!=0)
    {
        flag=0;
        if(prime(a-2))
            {
                printf("%lld = 2 + %lld\n",a,a-2);
                continue;
            }
        for(i=3;i<=a;i++)
        {
            if(prime(i))
                if(prime(a-i))
                    {
                        flag=1;
                        printf("%lld = %lld + %lld\n",a,i,a-i);
                        break;
                    }
        }
        if(flag!=1)
        printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

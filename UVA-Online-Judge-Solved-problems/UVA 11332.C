#include<stdio.h>
int main()
{
    unsigned long n,sum;
    while(scanf("%lu",&n)==1)
    {
        if(n<10 && n>0)
        printf("%lu\n",n);
        else if(n>9)
        {
            while(n>9)
            {
                sum=0;
                while(n!=0)
                {
                    sum=sum+n%10;
                    n=n/10;
                }
                n=sum;
            }printf("%lu\n",sum);
        }
        else
        break;
    }
    return 0;
}

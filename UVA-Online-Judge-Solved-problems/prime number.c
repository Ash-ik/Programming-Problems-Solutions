#include<stdio.h>
int main()
{
    unsigned long long n=0;
    printf("Enter a number to check whether it is a prime number or not:");
    while(1)
    {
        scanf("%llu",&n);
        if(n<2)
        printf("%llu:not prime\n",n);
        else if(n==2)
        printf("%llu:prime\n",n);
        else if((n-1)%2==0 && n%3!=0 && n%5!=0 && n%7!=0)
        printf("%llu:prime\n",n);
        else
        printf("%llu:not prime\n",n);
    }
}

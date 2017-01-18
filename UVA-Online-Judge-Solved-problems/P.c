#include<stdio.h>
int main()
{
    int n=0;
    while(n<1000)
    {
        if(n==2)
        printf("%u,",n);
        else if((n-1)%2==0 && n%3!=0 && n%5!=0 && n%7!=0)
        printf("%u,",n);
        n++;
    }
}

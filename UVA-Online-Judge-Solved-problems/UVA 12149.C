#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1 &&a!=0)
    {
        unsigned long long N,sum=0;
        for(N=1;N<=a;N++)          //u can also directly use belows equation:
        sum=sum+(N*N);               //sum=(N*(N+1)*(2*N+1))/6;
        printf("%llu\n",sum);        //remove those comment before submitting
    }
    return 0;
}

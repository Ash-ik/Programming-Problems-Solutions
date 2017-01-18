#include<stdio.h>
#include<math.h>
int main()
{
    long long t,n,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n=n<0 ? 0-n:n;
        if(n==0)
            printf("3\n");
        else
        {
            p=ceil((-1+sqrt(1+8*n))/2);
            while(((p*(p+1)/2)-n)%2) p++;
            printf("%lld\n",p);
        }
        if(t) putchar('\n');
    }
    return 0;
}

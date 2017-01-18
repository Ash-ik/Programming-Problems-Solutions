#include<stdio.h>
int main()
{
    unsigned long long a,x,n;
    while(scanf("%llu",&a)!=EOF)
    {
        n=a;
        x=0;
        while(n!=0)
        {
                        if(n%2!=0)
                        {
                            if ((n+1)%4==0&& n!=3)
                                n++;
                            else
                                n--;
                        }
            else if(n%2==0 &&n)
            n/=2;
            x++;
        }
         printf("%llu\n",x);
    }
    return 0;
}

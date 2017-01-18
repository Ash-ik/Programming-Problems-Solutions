#include<stdio.h>
long long scan_positive_int(long long *a)
{
        long long x=0;
        register long long c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
int main()
{
    long long a,b,c,temp,ans;
    while(1)
    {
        scan_positive_int(&a),scan_positive_int(&b),scan_positive_int(&c);
        if(!(a+b+c)) return 0;
        switch(c%5)
        {
            case 0:printf("%lld\n",a);break;
            case 1:printf("%lld\n",b);break;
            case 2:printf("%lld\n",(b+1)/a);break;
            case 3:printf("%lld\n",(b+a+1)/(a*b));break;
            case 4:printf("%lld\n",(a+1)/b);break;
            default:break;
        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
#define getchar_unlocked getchar
int scan_positive_int()
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        return x;
}
int main()
{
    int T,i,j;
    double a,b,L;
    T=scan_positive_int();
    for(j=1; j<=T; j++)
    {
        b=scan_positive_int();
        a=scan_positive_int();
        L=2.0*pi*a;
        double e=1.0-b*b/a/a,sum=1.0,tmp=1.0,r;
        for(i=1; i<=1000; i++)
        {
            r=(2.0*i-1.0)/(2.0*i);
            tmp*=r*r*e;
            sum-=tmp/(2.0*i-1.0);
        }
        printf("Case %d: %.8lf\n",j,L*sum);
    }
    return 0;
}

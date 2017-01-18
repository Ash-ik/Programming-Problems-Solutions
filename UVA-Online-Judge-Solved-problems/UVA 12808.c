#include<stdio.h>
#include<math.h>

#define getchar_unlocked getchar
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

int main()
{
    int t,L,D,H,V;
    float time,distance;
    scan_positive_int(&t);
    while(t--)
    {
        scan_positive_int(&L),scan_positive_int(&D),scan_positive_int(&H),scan_positive_int(&V);
        distance=sqrt((2.0*H*V*V)/9810);

        if(distance>=(D+500.0) &&distance<=(L+D-500.0)) puts("POOL");
        else if((distance>=(D-500.0) &&distance<=(D+500.0))||(distance>=(L+D-500.0) &&distance<=(L+D+500.0))) puts("EDGE");
        else puts("FLOOR");
    }
    return 0;
}

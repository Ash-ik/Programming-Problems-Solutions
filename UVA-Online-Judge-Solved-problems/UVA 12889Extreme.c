#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int i,t,n,x,z;
long long ans;
    char verdict[2][29]={"Happy Birthday Tutu!\n","Better luck next time!\n"};

int main()
{
    scan_positive_int(&t);

    while(t--)
    {
        ans=0;
        scan_positive_int(&n);
        x=n;
        while(x--)
            scan_positive_int(&z),ans+=z;
        if(ans%n)
            fwrite(verdict[0],1,21,stdout);
        else
            fwrite(verdict[1],1,23,stdout);
    }
    return 0;
}




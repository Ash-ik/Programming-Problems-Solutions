#include <stdio.h>
#define getchar_unlocked getchar
int fastRead_int() {
    register int c = getchar_unlocked();
    int x = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    return x;
}
int main()
{
    int n,t;
    t=fastRead_int();
    while(t--)
    {
        int i,cnt=1,z=3;
        n=fastRead_int();
        for(i=3;i<=n;)
        {
            if(i==n) {printf("%d\n",cnt);break;}
                i=i+z;
            z++;
            cnt++;
        }
        if(i>n) printf("No solution\n");
    }
    return 0;
}

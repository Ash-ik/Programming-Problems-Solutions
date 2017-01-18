#include<stdio.h>
typedef long long ll;
int main()
{
    char in[20];
    ll x,y;
    int cases=0;
    while(gets(in))
    {
        sscanf(in,"%lld %lld",&x,&y);
        if(!x && !y) return 0;
        printf("Case %d: %lld\n",++cases,(x*y*(x-1)*(y-1))/4);
    }
}

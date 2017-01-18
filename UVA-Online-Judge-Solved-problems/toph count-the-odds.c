#include<stdio.h>
typedef long long ll;
int main()
{
    ll x,y;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
        x--;
        if(x%2) x++;
        if(y%2) y++;
        printf("%lld\n",y/2-x/2);
    }
    return 0;
}

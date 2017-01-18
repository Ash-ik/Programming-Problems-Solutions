#include<stdio.h>
#define ll long long
ll scan_positive_int(ll *a)
{
        ll x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
ll calc(ll n, ll powOfTen, ll lef) {
    if(!n)  return 0;
    ll lastDigit=n%10;
    return n/10*45*powOfTen + lastDigit*lef + lastDigit*(lastDigit-1)/2*powOfTen + calc(n/10, powOfTen*10, lef+lastDigit*powOfTen);
}
int main()
{
    ll i,n1,x,ans,temp,n2,n;

    while(scan_positive_int(&n1) &&n1)
        scan_positive_int(&n2),printf("%lld\n",calc(n2,1,1)-calc(n1-1,1,1));
    return 0;
}

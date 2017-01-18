#include<stdio.h>
#include<math.h>
#define DecimalToBinary(num) {long long pos=log2(num);while(pos>=0)printf("%lld",(num>>pos--)&1);puts("");}
#define odd(x) x&1
#define power(x) 1<<x
#define getchar_unlocked getchar
#define scan_positive_int(a) {int x=0;register int c=getchar_unlocked();for(; c>47 && c<58 ; c = getchar_unlocked()){x = (x<<1) + (x<<3) + c - 48;}a=x;}
int main()
{
    int x;
    scan_positive_int(x);

}

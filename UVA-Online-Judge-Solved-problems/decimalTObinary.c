#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char x[100000];
#define DecimalToBinary(num) {long long msb=log2(num);while(msb>=0)printf("%lld",(num>>msb--)&1);puts("");}
int main()
{
//    freopen("debug.txt","r",stdin);
    long long a,n=2,p=1;
    while(scanf("%lld",&a)==1)  //takes a number a,and convert it into base n.
    {
        lltoa(a,x,n);
        printf("%lld %s\n",a,x);
        DecimalToBinary(a);
        p++;
    }
    return 0;
}

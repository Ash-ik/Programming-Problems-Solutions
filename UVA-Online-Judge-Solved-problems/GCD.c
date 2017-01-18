#include<stdio.h>
int gcd(long a,long b)
{
if(b==0)
return a;
printf("%d ",a);
return gcd(b,a%b);
}
int main(){
    int a,b;
while(scanf("%d%d",&a,&b)==2)
    printf("Greatest Common Divisor is %d\n",gcd(a,b));
    return 0;
}

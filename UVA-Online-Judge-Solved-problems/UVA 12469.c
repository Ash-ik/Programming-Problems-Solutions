#include<stdio.h>
int n,fib[10020];
int main()
{
    fib[1]=0;fib[2]=1;fib[3]=1;fib[5]=1;fib[8]=1;fib[13]=1;fib[21]=1;fib[34]=1;fib[55]=1;fib[89]=1;fib[144]=1;fib[233]=1;fib[377]=1;fib[610]=1;fib[987]=1;fib[1597]=1;
        while(scanf("%d",&n)==1 &&n)
        printf("%s\n",fib[n]==1?"Roberto":"Alicia");
        return 0;
}

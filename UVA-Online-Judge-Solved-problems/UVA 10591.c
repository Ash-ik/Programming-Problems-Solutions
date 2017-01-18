#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int squareSum(int n)
{
    if(n<10) return n*n;
    return (n%10)*(n%10)+squareSum(n/10);
}
bool isHappy(int n)
{
    do
    {
        n=squareSum(n);
        if(n==1||n==7) return true;
    }while(n>9);
    return false;
}
int main()
{
    int t,cases=0,input;
    char in[20];
    gets(in);
    t=atoi(in);
    while(t--)
    {
        gets(in);
        input=atoi(in);
        if(isHappy(input))
            printf("Case #%d: %d is a Happy number.\n",++cases,input);
        else
            printf("Case #%d: %d is an Unhappy number.\n",++cases,input);

    }
    return 0;
}

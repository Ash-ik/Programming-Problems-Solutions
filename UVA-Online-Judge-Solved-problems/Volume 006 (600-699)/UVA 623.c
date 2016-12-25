#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void big_factorial(int x)
{
    int a[3000]={1},m=1,i,j;
    for(i=1;i<=x;i++)
    {
        int temp=0,carry=0;
        for(j=0;j<m;j++)
        {
            temp=a[j]*i+carry;
            a[j]=temp%10;
            carry=temp/10;
        }
        while(carry>0)
        {
            a[m]=carry%10;
            carry/=10;
            m++;
        }
    }

        for(i=m-1;i>=0;i--)
            printf("%d",a[i]);
        printf("\n");

}
int main()
{
    int i,n;
    while(scanf("%d",&n)==1)
        printf("%d!\n",n),big_factorial(n);

        return 0;

}

#include<stdio.h>
#include<string.h>
#include<math.h>

int big_factorial(int x)
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
int sum=0;
        for(i=0;i<m;i++)
            sum+=a[i];

            return sum;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
        printf("%d\n",big_factorial(n));
    return 0;
}

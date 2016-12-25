#include<stdio.h>


void big_factorial(int x)
{
    int a[785]={1},m=1,i,j,ans[11]={};
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

        for(i=0;i<m;i++)
            ans[a[i]]++;

        printf("%d! --\n   (0)    %d    (1)    %d    (2)    %d    (3)    %d    (4)    %d\n   (5)    %d    (6)    %d    (7)    %d    (8)    %d    (9)    %d\n",x,ans[0],ans[1],ans[2],ans[3],ans[4],ans[5],ans[6],ans[7],ans[8],ans[9]);

}

int main()
{
    int n;
    while(scanf("%d",&n)==1 &&n)
        big_factorial(n);
    return 0;
}

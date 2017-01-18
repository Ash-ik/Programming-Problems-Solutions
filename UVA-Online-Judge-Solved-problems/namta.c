#include<stdio.h>
int main()
{
    int a,n,x,p,temp;
    printf("a*1=\na*2=\n.\n.\na*x=\n\nNow enter a and x:\n");
    scanf("%d %d",&a,&x);
    while(a<=10)
    {
    for(n=1;n<=x;n++)
    {
        temp=a*n;
        p=sumDigit(temp);
        printf("%d*%d=%d=%d\n",a,n,a*n,p);
    }
    a++;
    printf("\n");
    }
}
    int sumDigit(int temp)
    {
        while(temp>9)
            {
                int sum=0;
                while(temp!=0)
                {
                    sum=sum+temp%10;
                    temp=temp/10;
                }
                temp=sum;
            }
    }

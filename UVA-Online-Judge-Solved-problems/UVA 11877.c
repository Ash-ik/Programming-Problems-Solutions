#include<stdio.h>
int main()
{
    int n,a,sum,temp;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%d",&a);
        if(a==0)  break;
        temp=a%3;
        while(a>1)
        {
            a=a/3;
            sum+=a;
        }
        if(temp+a>=2)
        sum++;
        printf("%d\n",sum);
    }
    return 0;
}

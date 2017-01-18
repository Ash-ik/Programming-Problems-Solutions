#include<stdio.h>
int main()
{
    long a,b,c,i,t;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b)<=c||(a+c)<=b||(b+c)<=a)
        printf("Case %ld: Invalid\n",i);
        else if(a<=0||b<=0||c<=0)
        printf("Case %ld: Invalid\n",i);
        else if(a==b && b==c && c==a)
        printf("Case %ld: Equilateral\n",i);
        else if(a==b||b==c||c==a)
        printf("Case %ld: Isosceles\n",i);
        else
        printf("Case %ld: Scalene\n",i);
    }
}

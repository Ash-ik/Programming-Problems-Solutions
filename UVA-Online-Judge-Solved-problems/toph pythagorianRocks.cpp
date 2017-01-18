#include<stdio.h>
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",maxi(a,maxi(b,c)));
    return 0;
}

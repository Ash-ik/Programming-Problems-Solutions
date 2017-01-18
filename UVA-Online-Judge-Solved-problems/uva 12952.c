#include<stdio.h>
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
            printf("%d\n",maxi(a,b));
    return 0;
}

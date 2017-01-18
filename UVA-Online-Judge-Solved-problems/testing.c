#include<stdio.h>
int rec(int);
int main()
{
    int a,ans;
    while(scanf("%d",&a)==1)
    {
        ans=rec(a);
        printf("%d\n",ans);
    }
    return 0;
}
int rec(int a)
{
    if(a>=101)
        a=a-10;
    else if(a<=100)
        a=rec(rec(a+11));
    return a;
}

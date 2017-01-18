#include<stdio.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a<c ||a>c && a<b)
        printf("Case %d: %d\n",i,a);
        if(b>a && b<c ||b>c && b<a)
        printf("Case %d: %d\n",i,b);
        if(c>a && c<b ||c>b && c<a)
        printf("Case %d: %d\n",i,c);
        i++;
    }
    return 0;
}

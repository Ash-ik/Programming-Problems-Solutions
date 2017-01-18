#include<stdio.h>
int main()
{
    int t,n,a,max,min;
    scanf("%d",&t);
    while(t--)
    {
        max=0,min=1000;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            if(a>max) max=a;
            if(a<min) min=a;
        }
        printf("%d\n",(max-min)*2);
    }
    return 0;
}

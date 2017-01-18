#include<stdio.h>
int main()
{
    int a,b,n,c;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d %d",&a,&b);
            if(a<b || (a+b)%2!=0)
                printf("impossible\n");
            else
            {
                c=(a+b)/2;
                b=a-c;
                printf("%d %d\n",c,b);
            }
        }
    }
    return 0;
}

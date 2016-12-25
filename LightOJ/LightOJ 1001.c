#include<stdio.h>
int main()
{
    int n,cases=1,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n<10)
        printf("%d %d\n",0,n);
        else
            printf("%d %d\n",n-10,10);
    }
    return 0;
}

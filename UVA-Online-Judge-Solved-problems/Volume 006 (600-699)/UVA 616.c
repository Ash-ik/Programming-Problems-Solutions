#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1 &&n>-1)
    {
        int p=n-1,ans=0;
        int x=sqrt(p)+1;
        while(x-->1)
        {
            if(p%x==0)
                ans++;
        }
        if(n==3)
            printf("3 coconuts, 2 people and 1 monkey\n");
        else if(n<3)
            printf("%d coconuts, no solution\n",n);
        else
        {
            if(ans<3)
           printf("%d coconuts, no solution\n",n);
           else
                printf("%d coconuts, %d people and 1 monkey\n",n,ans);
        }
    }
    return 0;
}

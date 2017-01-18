#include<stdio.h>
#include<math.h>
int main()
{
    long long flag,n,p,i,j;
    while(scanf("%lld",&n)==1 &&n)
    {
        p=sqrt(n);
        flag=1;
for(i=1;i<=p;i++)
    {
    for(j=1;j<i;j++)
        {
            if(i*i*i-j*j*j==n)
            {
                flag=0;
                printf("%lld %d\n",i,j);
                break;
            }
        }
        if(!flag)
            break;
    }
        if(flag)
            printf("No solution\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,k,x;
    int count=0,test_case;
    scanf("%d",&test_case);
        while(test_case--)
        {
            scanf("%d %d %d",&n,&k,&x);
            printf("Case %d: %d\n",++count,(x*(x-1)+n*(n+1)-(x+k-1)*(x+k))/2);
        }
        return 0;
}

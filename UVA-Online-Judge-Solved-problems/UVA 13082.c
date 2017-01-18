#include<stdio.h>
int main()
{
    int cases,t,n,i,j;
    scanf("%d",&cases);
    for(i=1; i<=cases; i++)
    {
        int val=1,counts=0;
        scanf("%d",&t);
        for(j=0; j<t; j++)
        {
            scanf("%d",&n);
            if(n==val) val++,counts++;
        }
        printf("Case %d: %d\n",i,t-counts);
    }

    return 0;
}

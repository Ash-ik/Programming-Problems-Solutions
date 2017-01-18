#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int t,i,j,a[100000],cost,ans1;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
            scanf("%d",&a[i]);
        scanf("%d",&cost);
        qsort(a,i,sizeof(int),compare);
        for(i=0;i<t;i++)
        {
            for(j=i+1;j<t;j++)
            {
                if(a[i]+a[j]==cost)
                {
                    ans1=a[i];
                    break;
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",ans1,cost-ans1);
    }
    return 0;
}


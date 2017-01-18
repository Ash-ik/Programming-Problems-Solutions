#include<stdio.h>
int main()
{
    int min,bed,i,j,n,b,h,w,cost_per_person;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF)
{
    min=500001;
    for(i=0; i<h; i++)
        {
            scanf("%d",&cost_per_person);
            for(j=0; j<w; j++)
            {
                scanf("%d",&bed);
                if(bed>=n)
                {
                    if(cost_per_person<min)
                        min=cost_per_person;

                }
            }
        }
        int total_cost=min*n;
        if(total_cost>b)
            printf("stay home\n");
        else printf("%d\n",total_cost);
    }
    return 0;
}

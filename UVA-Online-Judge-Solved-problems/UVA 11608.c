#include<stdio.h>
int main()
{
    int probAtBegin,cases=0;
    while(scanf("%d",&probAtBegin)==1 && probAtBegin>-1)
    {
        int i,have[14],required[14];
        have[0]=probAtBegin;
        for(i=1;i<13;i++)
        scanf("%d",&have[i]);
        for(i=1;i<13;i++)
            scanf("%d",&required[i]);
        printf("Case %d:\n",++cases);
        for(i=1;i<13;i++)
        {
            if(probAtBegin>=required[i])
                {
                    printf("No problem! :D\n");
                    probAtBegin-=required[i];
                }
            else
                printf("No problem. :(\n");

                    probAtBegin+=have[i];
        }
    }
    return 0;
}

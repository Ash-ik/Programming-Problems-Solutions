#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d;
        scanf("%d",&d);
        char name[d+5][25];
        int min[d+5],max[d+5],i;
        for(i=0;i<d;i++)
        {
            scanf("%s %d %d",name[i],&min[i],&max[i]);
        }
        int query;
        scanf("%d",&query);
        while(query--)
        {
            int match=0;
            char temp[25]={};
            int num;
            scanf("%d",&num);
            for(i=0;i<d;i++)
            {
                if(match==2)
                    break;

                if(min[i]<=num && max[i]>=num)
                {
                    match++;
                    if(match==1)
                    strcat(temp,name[i]);
                }
            }
            if(match==0 || match==2)
                printf("UNDETERMINED\n");
            else
                printf("%s\n",temp);
        }
        if(t)
            printf("\n");
    }
    return 0;
}

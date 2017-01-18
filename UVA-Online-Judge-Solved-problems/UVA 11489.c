#include<stdio.h>
int main()
{
    int tesCase,cases=1;
    scanf("%d",&tesCase);
    while(tesCase--)
    {
        char num[1005];
        int ans[5]={};
        int numOfMove=0,i,sum=0;
        scanf("%s",num);
            for(i=0;num[i];i++)
            {
                int x=num[i]-'0';
                ans[x%3]++;
                sum+=x;
            }
            if(ans[sum%3])
                {
                    ans[sum%3]--;
                    numOfMove=1+ans[0];
                }
                if(numOfMove+1==i)
                numOfMove++;
                if(numOfMove%2)
                    printf("Case %d: S\n",cases++);
                else
                    printf("Case %d: T\n",cases++);
    }
    return 0;
}

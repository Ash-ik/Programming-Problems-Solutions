#include<stdio.h>
int main()
{
    char a[84];
    int i,t;
    register int ans,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        ans=sum=0;
        for(i=0;a[i];i++)
        {
            if(a[i]=='O')
            {
                ans++;
                sum+=ans;
            }
            else
                ans=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}

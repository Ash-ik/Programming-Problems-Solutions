#include<stdio.h>

int main()
{
    char c;
    int t,m,cnt,flag,i,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        flag=1;
        cnt=ans=0;
        scanf("%d\n",&m);
        while(m--)
        {
            scanf("%c\n",&c);
            if(flag==0)
                continue;
            if(c=='W')
                cnt=0;
            else
            {
                cnt++;
                if(cnt==3)
                    flag=0;
            }
            ans++;
        }
        printf("Case %d: ",i);
        if(flag==1)
            printf("Yay! Mighty Rafa persists!\n");
        else printf("%d\n",ans);
    }

    return 0;
}

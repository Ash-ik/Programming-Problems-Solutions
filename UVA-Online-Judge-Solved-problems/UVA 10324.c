#include<stdio.h>
#include<string.h>
char a[1000020];
int main()
{
    int q,z=1,p,x,y,i,ans,temp;
    while(scanf("%s",a)==1)
    {
        scanf("%d",&q);
        printf("Case %d:\n",z++);
        while(q--)
        {
            scanf("%d %d",&x,&y);
            if(x==y)
            printf("Yes\n");
            else
            {
                if(x>y)
            {
                temp=x;
                x=y;
                y=temp;
            }
            ans=0;
            for(i=x;i<=y;i++)
                    ans+=a[i]-48;
                if(ans==0 || ans==y-x+1 )
                    printf("Yes\n");
                else printf("No\n");
            }
        }
    }
    return 0;
}

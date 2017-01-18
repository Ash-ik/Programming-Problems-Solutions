#include<stdio.h>
#include<string.h>
int main()
{
    int ans,i=1,x,t,n;
    char a[10000];
    scanf("%d",&t);
    while(i<=t)
    {
        ans=0;
        x=0;
        scanf("%d\n",&n);
        scanf("%s",a);
        while(x<n)
        {
            if(a[x]=='.')
            {
                ans++;x+=3;
            }
            else x++;
        }
        printf("Case %d: %d\n",i,ans);
        i++;
    }
    return 0;
}

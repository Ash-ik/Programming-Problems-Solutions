#include<stdio.h>
#include<string.h>
int main()
{
    int a[109]={},i,p,n;
    a[2]=a[3]=a[5]=a[7]=a[13]=a[17]=a[19]=a[31]=a[61]=a[89]=a[107]=1;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            if(n==i)
            scanf("%d",&p);
            else
            scanf("%d%*c",&p);
            if(p<108)
            {
                if(a[p]==1)
            printf("Yes\n");
            else printf("No\n");
            }

            else printf("No\n");
        }
    }
    return 0;
}

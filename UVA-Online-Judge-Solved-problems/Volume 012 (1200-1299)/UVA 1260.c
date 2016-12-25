#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,a[n+2],ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            int j;
            register int temp=a[i];
            for(j=0;j<i;j++)
            {
                if(a[j]<=temp)
                    ans++;
            }
        }
        printf("%d\n",ans);
    }
}

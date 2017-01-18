#include<stdio.h>
int main()
{
    int i=1,dif,n,a[110000],ans,j,p,temp,x,q;
        scanf("%d",&n);
        while(i<=n)
        {

            scanf("%d",&x);
            for(j=1;j<=x;j++)
                scanf("%d",&a[j]);
                 a[0]=0;
                 ans=0;
            for(p=1;p<=x;p++)
                {
                    temp=a[p]-a[p-1];
                    if(temp>ans)
                        ans=temp;
                }
                temp=ans;
                for(q=1;q<=x;q++)
                {
                    dif=a[q]-a[q-1];
                    if(dif==temp)
                    temp--;
                    else if(dif>temp)
                    {
                        ans++;
                        break;
                    }
                }
                printf("Case %d: %d\n",i,ans);
            i++;
        }
        return 0;
}


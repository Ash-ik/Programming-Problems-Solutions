#include<stdio.h>
#include<string.h>
int main()
{
//    freopen("data.txt","r",stdin);
    int ans,t,n,x,a[1000],i;
    char p[1000],q[1000];
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        i=1;
        scanf("%d",&n);
        while(i<=n)
        {
            scanf("%s",p);
            if(!strcmp(p,"LEFT")) {a[i]=-1;ans--;}
            else if(!strcmp(p,"RIGHT")) {a[i]=1;ans++;}
            else
                {
                        scanf("%*s%d",&x);
                        a[i]=a[x];
                        ans+=a[i];
                }
            i++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
char a[1020];
int main()
{
    /*freopen("dataN.txt","r",stdin);*/
    int i,j,t,ans,flag,n,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        n=strlen(a);
        ans=0;
        for(p=0;p<n;p++)
        {
            flag=0;
            int ltr[200]={};
            /*printf("(");*/
            for(j=p;j<n;j++)
            {
                ++ltr[a[j]];
                if(ltr[a[j]]&1) flag++;
                else flag--;
                if(((j-p+1)&1 &&flag==1) ||!((j-p+1)&1) && flag==0)
                    {
                        /*printf("[%c]",a[j]);*/
                        ans++;
                    }
            }
            /*printf(") =(%d)\n",ans);*/
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}

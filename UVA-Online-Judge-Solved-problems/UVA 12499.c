#include<stdio.h>
int main()
{
    int t,i=1,x,n,l,a[10000],ans,p;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d %d",&n,&l);
        ans=0;
        for(x=0;x<n;x++) scanf("%d",&a[x]);
        a[x]=l;
        for(p=0;p<n;p+=2)
        {
            ans^=a[p+1]-a[p];
        }
        if(ans!=0)
        printf("Case %d: First Player\n",i++);
        else
        printf("Case %d: Second Player\n",i++);

    }
    return 0;
}

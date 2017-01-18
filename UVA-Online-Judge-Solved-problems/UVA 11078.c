#include<stdio.h>
#include<math.h>
#define min -100009
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
int main()
{
    int t,n,n1,i,ans,p;
    scanf("%d",&t);
    while(t--)
    {
        ans=min;
        scanf("%d %d",&n,&n1);
        for(i=1;i<n;i++)
        {
            scanf("%d",&p);
            ans=max(ans,n1-p);
            n1=max(n1,p);
        }
        printf("%d\n",ans);
    }
    return 0;
}

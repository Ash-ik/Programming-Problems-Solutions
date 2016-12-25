#include<stdio.h>
#include<math.h>
#define sc(x) scanf("%d",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define printNumWithCases(x) printf("Case %d: %d\n",cases,x)
#define read freopen("dataN.txt","r",stdin)
int main()
{
    int t,n,p,l;
    sc(t);
    while(t--)
    {
        scc(p,l);
        n=p-l;
        x=(int)sqrt(n);
        int ans[10000];
        for(i=1;i<=x;i++)
        {
            if(n%i==0)
            {
                if(i>l)
                    ans[z++]=i;
                if(i*i!=n && n/i>l)
                    ans[z++]=n/i;
            }
        }
    }
}

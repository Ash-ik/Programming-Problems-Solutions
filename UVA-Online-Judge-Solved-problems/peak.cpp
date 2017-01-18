#include<stdio.h>
#include<algorithm>
int i,n,m,x,y;
using namespace std;
int main()
{
    int fact[10]={1,1,2,6,24,120,720,5040,40320,362880},mod=10000;
    while(scanf("%d %d",&n,&m) && !(!n && !m))
    {

        int ans1[1001],ans2[1001],p=0,q=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x>1)
                ans1[p++]=x;
        }

        for(i=0;i<m;i++)
        {
            scanf("%d",&x);
            if(x>1)
                ans2[q++]=x;
        }
        if(p!=q)
        {
            puts("NO");
            continue;
        }
        sort(ans1,ans1+p);
        sort(ans2,ans2+q);

        for(i=0;i<p;i++)
            if(ans1[i]!=ans2[i])
                {
                    puts("NO");
                    break;
                }
        if(i==p)
            puts("YES");
    }
    return 0;
}

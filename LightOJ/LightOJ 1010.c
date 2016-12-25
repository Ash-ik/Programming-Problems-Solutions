#include<stdio.h>
#include<math.h>
#define sc(x) scanf("%d",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define printNumWithCases(x) printf("Case %d: %d\n",cases,x)
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
int cases=1;
int main()
{
    int a[201][201],i,j,t,ans;

    for(i=1;i<=200;i++)
        for(j=1;j<=200;j++)
        {
            if(i==1||j==1)
                a[i][j]=i*j;
            else if(i==2 || j==2)
                {
                    ans=((i*j)/8)*4;
                    if((i*j)%8==2)
                        ans+=2;
                    else if((i*j)%8==6 || (i*j)%8==4)
                        ans+=4;
                        a[i][j]=ans;
                }
            else
                a[i][j]=(i*j+1)/2;
        }

    sc(t);
    while(t--)
    {
        scc(i,j);
        printNumWithCases(a[i][j]);
        ++cases;
    }
    return 0;
}

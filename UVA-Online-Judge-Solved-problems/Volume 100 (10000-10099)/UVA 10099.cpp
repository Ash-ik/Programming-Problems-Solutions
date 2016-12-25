#include<stdio.h>
#include<math.h>
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int mini(int a,int b)
{
    if(a<b) return a;
    return b;
}
int main()
{

    int N,R,i,j,k,p,q,r,src,dest,tourist,cases=0;
    while(scanf("%d %d",&N,&R) && !(!N && !R))
    {
        int a[101][101]={};
        for(i=0;i<R;i++)
        {
            scanf("%d %d %d",&p,&q,&r);
            a[p][q]=r;
            a[q][p]=r;
        }
        scanf("%d %d %d",&src,&dest,&tourist);

        for(k=1;k<=N;k++)
        for(j=1;j<=N;j++)
        for(i=1;i<=N;i++)
        a[i][j]=maxi(a[i][j],mini(a[i][k],a[k][j]));

        int ans=ceil((tourist*1.0)/(a[src][dest]-1.0));
        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",++cases,ans);
    }
    return 0;
}

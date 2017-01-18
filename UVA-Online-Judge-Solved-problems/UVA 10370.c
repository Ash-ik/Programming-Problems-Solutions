#include<stdio.h>
int main()
{
    float sum,n,x,avg,ans;
    int mark[1020],i,k,p,c;
    while(scanf("%d",&c)==1)
    {
        for(i=0;i<c;i++)
        {
            avg=0;
            sum=0;x=0;
            scanf("%f",&n);
            for(k=0;k<n;k++)
            {
                scanf("%d",&mark[k]);
                sum=sum+mark[k];
            }
            avg=sum/n;
            for(p=0;p<n;p++)
            {
                if(mark[p]>avg)
                x++;
            }
            ans=(x*100)/n;
            printf("%.3f%%\n",ans);
        }
}
return 0;
}

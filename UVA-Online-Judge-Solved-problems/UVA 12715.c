#include<stdio.h>
#define max 1000003
typedef long long int LL;

struct values
{
    int first;
    int second;
};
int main()
{
    int t,i=1,n,m,p,q,l,r,cang,maximum,minimum,cov;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);

        values data[n+2];

        for(p=0;p<n;p++)
            scanf("%d %d",&data[p].first,&data[p].second);

        printf("Case %d:\n",i++);
        for(p=0;p<m;p++)
        {
            scanf("%lld",&cang);
            maximum=0;
            for(q=0;q<n;q++)
        {
                if(cang<data[q].first || cang>data[q].second) cov=0;

                else
                {
                    if((cang-data[q].first)<=(data[q].second-cang))
                        cov=(cang-data[q].first);
                        else
                        cov=(data[q].second-cang);
                }
                if(q==0)
                minimum=cov;

                if(cov<minimum) minimum=cov;
                if(minimum>maximum) maximum=minimum;
        }
            printf("%lld\n",maximum);
        }
    }
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#define N 1000005
typedef long long LL;

LL Abs(LL x)
{
    if(x<0) return -x;
    return x;
}
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

LL dif[N],temp[N];
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        dif[0]=0;
        LL sum=0,avg;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&temp[i]);
            sum+=temp[i];
        }
        avg=sum/n;
        for(i=1;i<n;i++)
            dif[i]=dif[i-1]+temp[i]-avg;

            qsort(dif,n,sizeof(long long),compare);

            LL mid=dif[n/2];
            sum=0;
        for(i=0;i<n;i++)
            sum+=Abs(mid-dif[i]);

            printf("%lld\n",sum);
    }
    return 0;

}

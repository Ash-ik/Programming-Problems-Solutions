#include<stdio.h>
#include <stdlib.h>
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int a[1000001],ans[1000001];
int main()
{
    int t,cases=1,n,k,i,x,p;
    scan_positive_int(&t);
    long long print_all[t+2];
    while(t--)
    {
        long long profit=0;
        p=0;

        scan_positive_int(&n);
        scan_positive_int(&k);
        for(i=0;i<n;i++)
            scan_positive_int(&a[i]);

        for(i=0;i<n;i++)
        {
            scan_positive_int(&x);
            if(x<a[i])
            {
                ans[p++]=a[i]-x;
            }
            else
                profit+=(x-a[i]);
        }
        qsort(ans,p,sizeof(int),compare);
        for(i=p-k-1;i>=0;i--)
            profit-=ans[i];

        if(profit>=0)
            print_all[cases++]=profit;
            else
                print_all[cases++]=-1;
    }
    for(t=1;t<cases;t++)
 {
     if(print_all[t]==-1)
        printf("Case %d: No Profit\n",t);
        else
        printf("Case %d: %lld\n",t,print_all[t]);
}
    return 0;
}

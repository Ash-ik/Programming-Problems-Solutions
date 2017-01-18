#include<stdio.h>
#include<stdlib.h>
int compare( const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int n,d,r;
    while(scanf("%d %d %d",&n,&d,&r)==3 &&(n+d+r))
    {
        int i,morning[n+2],evening[n+2];
        for(i=0;i<n;i++)
        scanf("%d",&morning[i]);
        for(i=0;i<n;i++)
        scanf("%d",&evening[i]);
        qsort(morning,n,sizeof(int),compare);
        qsort(evening,n,sizeof(int),compare);
        int ans=0;
        for(i=0;i<n;i++)
        {
            int temp=morning[i]+evening[n-i-1];
            if(temp>d)
                ans+=temp-d;
        }
        printf("%d\n",ans*r);
    }
    return 0;
}

#include <stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    int t,i,min_time,max_time,n,len,ant;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&len,&ant);
        min_time=max_time=0;
        while(ant--)
        {
            scanf("%d",&n);
            min_time=max(min_time,min(len-n,n));
            max_time=max(max_time,max(len-n,n));
        }
        printf("%d %d\n",min_time,max_time);
    }
    return 0;
}

#include<stdio.h>
#include<stdbool.h>
int n,c,a[1000+2];
bool solvable(int amount)
{
    int i,sum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>amount) return false;
        if(sum+a[i]>amount)
            sum=0;
            if(sum==0)
            cnt++;
        sum+=a[i];
    if(cnt>c) return false;
    }
    return true;
}
int divide_n_conquare(int low,int high)
{
    while(high>low)
    {
        if(solvable(high)==true)
                {
                    high=low+(high-low)/2;
                }
                else
                {
                    low=high;
                    high=low+high/2;
                }
    }
    return high+1;
}
int main()
{
    while(scanf("%d %d",&n,&c)==2)
        {
            int i,max=0,sum=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]>max)
                    max=a[i];
                    sum+=a[i];
            }
            int low=max-1,high=sum+1;
            printf("%d\n",divide_n_conquare(low,high));

            for(i=0;i<n;i++) a[i]=0;
        }
        return 0;
}

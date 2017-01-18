#include<stdio.h>
#include<math.h>
int main()
{

    long long min,i,t,x,y,flag,n,temp;
    scanf("%lld",&t);
    while(t--)
    {
        flag=0;
        scanf("%lld %lld",&x,&y);
        n=x-y+2;
        temp=(long long)(sqrt(n*1.0));
        if(n==0)
        {
            printf("%lld\n",x+1);
            continue;
        }
        for(i=1;i<=temp;i++)
        {
            if(n%i==0)
            {
                if((x%i)+2==y)
            {
                if(!flag)
                    min=i,flag=1;
                if(i<min)
                    min=i;
            }
            if((x%(n/i))+2==y)
            {
                if(!flag)
                    min=n/i,flag=1;
                if(n/i<min)
                    min=n/i;
            }
        }
        if(flag &&i>min)
                break;
    }
    if(flag)
            printf("%lld\n",min);
        else
        printf("Impossible\n");
    }
    return 0;
}

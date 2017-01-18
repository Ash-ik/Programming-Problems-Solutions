#include<stdio.h>
int main()
{
    int k;
    while(scanf("%d",&k)!=EOF)
    {
        int counts=0,i,ans[10000+10]={};
        for(i=k+1;i<=2*k;i++)
        {
            if((i*k)%(i-k)==0)
            {
                ans[counts++]=i;
            }
        }
        printf("%d\n",counts);
        for(i=0;i<counts;i++)
        printf("1/%d = 1/%d + 1/%d\n",k,(ans[i]*k)/(ans[i]-k),ans[i]);
    }
    return 0;
}

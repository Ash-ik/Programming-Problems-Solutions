#include<stdio.h>
int main()
{
    int ans[5010]={},x,p,q,i,temp;
    for(i=1;i<=5000;i++)
    {
        int num[10]={};
        temp=i;
        while(temp)
        {
            x=temp%10;
            if(num[x])
                break;
            num[x]=1;
            temp/=10;
        }
        if(temp==0)
            ans[i]=1;
        ans[i]+=ans[i-1];
    }
    while(scanf("%d %d",&p,&q)==2)
        printf("%d\n",ans[q]-ans[p-1]);
        return 0;
}

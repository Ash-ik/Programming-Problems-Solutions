#include<stdio.h>
int main()
{
    int temp,mile,juice,i=1,j,tempu,t,n,a[12000];
    scanf("%d",&t);
    while(i<=t)
    {
        mile=juice=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            temp=a[j]/30;
            tempu=a[j]/60;
            if(temp>=0) temp++;
                if(tempu>=0) tempu++;
            mile+=temp*10;
            juice+=tempu*15;
        }
            if(mile<juice) printf("Case %d: Mile %d\n",i,mile);
            else if(juice<mile) printf("Case %d: Juice %d\n",i,juice);
            else printf("Case %d: Mile Juice %d\n",i,mile);
            i++;
    }
    return 0;
}

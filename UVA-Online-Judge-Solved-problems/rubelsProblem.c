#include<stdio.h>
int main()
{
    unsigned long long ans[400]={0,},temp=1;
    int i;
    for(i=1;i<=365;i++)
    {
        if(i%6==0)
        {
            if(temp%2==0) temp++;
            else  temp=temp*2;
        }
        ans[i]=temp;
    }

    while(scanf("%d",&i)!=EOF &&i<=365)
    {
        printf("height at %dth month = %d meter\n",i,ans[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int testCase;

    long long ans[42],i;
    ans[0]=ans[1]=1,ans[2]=5;
    for(i=3;i<=40;i++)
    ans[i]=ans[i-1]+4*ans[i-2]+2*ans[i-3];

    scanf("%d",&testCase);
    while(testCase--)
    {
        int num;
        scanf("%d",&num);
        /*if(num<0)
            printf("0\n");*/
        printf("%lld\n",ans[num]);
    }
    return 0;
}

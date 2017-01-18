#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<=b)
    return a;
    else return b;
}
int main()
{
    int n,b,i,x,ans,ps,sum,sp,tmp,ans1,ans2;
    char a[10010];
    scanf("%d\n",&n);
    while(n--)
    {
        sp=0,sum=0,ps=0;
        gets(a);
        b=strlen(a);
        for(i=0;i<b;i++)
        {
            x=a[i]-'A';
            x=min(x,26-x);
            printf("(%d)",x);
            sum=sum+x;

        }
        sum=sum+b-2;
        printf("%d\n",sum);
    }
    return 0;
}


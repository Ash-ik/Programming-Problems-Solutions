#include<stdio.h>
int main()
{
    int n,t,i,flag,dif,a,b;
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            if(i==0)
            dif=a-b;
            if(dif==a-b)
            flag++;
        }
    printf("%s\n",flag==n?"yes":"no");
    if(t) putchar('\n');
}
return 0;
}

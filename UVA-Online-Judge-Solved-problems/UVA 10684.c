#include<stdio.h>
int main()
{
    int a[10010],b,c,temp,max;
    while(scanf("%d",&c)==1 &&c!=0)
    {
        temp=0;max=0;
        for(b=0;b<c;b++)
    {
        scanf("%d",&a[b]);
        temp=temp+a[b];
        if(temp<0)
        temp=0;
        if(temp>max)
        max=temp;
    }
    if(max>0)
    printf("The maximum winning streak is %d.\n",max);
    else printf("Losing streak.\n");
    }
    return 0;
}

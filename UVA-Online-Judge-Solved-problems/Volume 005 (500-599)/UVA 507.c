#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int j,n,max=0,temp=0,begin=1,pos_begin=1,pos_end=-1;
        scanf("%d",&n);
        int a;
        for(j=1;j<n;j++)
        {
            scanf("%d",&a);
        temp=temp+a;
        if(temp<0)
            temp=0,begin=j+1;
        if(temp>max || (temp==max && j-begin>pos_end-pos_begin))
        {
            max=temp;
            pos_begin=begin;
            pos_end=j;
        }
        }
        if(!max)
            printf("Route %d has no nice parts\n",i);
        else
            printf("The nicest part of route %d is between stops %d and %d\n",i,pos_begin,pos_end+1);
    }
    return 0;
}

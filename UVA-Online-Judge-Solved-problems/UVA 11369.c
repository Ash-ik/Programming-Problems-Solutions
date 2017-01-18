#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comp(const void *a,const void *b)
{
    return (*(int*)b-*(int*)a);
}
int main()
{
    int t,n,sum,a[1000],temp,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        temp=0;
        while(temp<n)
        scanf("%d",&a[temp++]);
        qsort(a,temp,sizeof(int),comp);
        sum=0;
        for(i=2;i<n;i+=3)
        sum+=a[i];
        printf("%d\n",sum);
    }
    return 0;
}

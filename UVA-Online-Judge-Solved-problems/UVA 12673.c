#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *a,const void *b)
{
    if(a<0 && b<0)
        return (*(int*)b+*(int*)a);
        return (*(int*)a-*(int*)b);
}
int main()
{
    int a[1000],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        qsort(a,5,sizeof(int),compare);
        for(i=0;i<5;i++)
            printf("%d\n",a[i]);
}

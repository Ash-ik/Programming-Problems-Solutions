#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int t,a[10000],max=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
        }
        qsort(a,i,sizeof(int),compare);
        printf("Max hits: %d\n",t-1);
        for(i=0;i<t;i++)
            if(a[i]!=max)
            printf("%d\n",a[i]);
            return 0;
}

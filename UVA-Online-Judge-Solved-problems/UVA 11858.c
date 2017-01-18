#include<stdio.h>
#define MAX 10000005
int num[MAX],temp[MAX/2];
long long swaps;
void merge_sort(int low,int high)
{
    if (low+1>=high)
        return;

    int mid=(low+high)/2;

    merge_sort(low,mid);
    merge_sort(mid,high);

    int i=low,j=mid,k=0;
    while(i<mid && j<high)
    {
        if(num[i]>num[j])
        {
            temp[k++]=num[j++];
            swaps+=mid-i;
        }
        else
            temp[k++]=num[i++];
    }
    while(i<mid)
        temp[k++]=num[i++];

    while(j<high)
        temp[k++]=num[j++];

    for(i=low;i<high;i++)
        num[i]=temp[i-low];
}


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        swaps=0;
        int j;
        for(j=0;j<n;j++) scanf("%d",&num[j]);

        merge_sort(0,n);
            printf("%lld\n",swaps);
    }
    return 0;
}



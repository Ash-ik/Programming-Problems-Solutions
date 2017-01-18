#include<stdio.h>
int main()
{
    int n;
    while(printf("Enter the number of element in the array:") && scanf("%d",&n)==1 &&n)
    {
        int arr[n+1],i,sum=0,maxSum=0,start_pos,end_pos;
        printf("Enter %d number:\n",n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
            sum=0,start_pos=i;
        if(sum>maxSum)
            maxSum=sum,end_pos=i;
    }
    printf("maximum sum is:\n");
    for(i=start_pos+1;i<end_pos;i++)
    {
        printf("%d%c",arr[i]<0 ? -arr[i]:arr[i] ,arr[i+1]<0 ? '-':'+');
    }
    printf("%d=%d\n\n",arr[i]<0 ? -arr[i]:arr[i] ,maxSum);
    }
    return 0;
}

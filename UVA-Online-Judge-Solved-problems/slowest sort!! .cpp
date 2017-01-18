#include<stdio.h>
void display(int a[],int b)
{
    for(int i=0;i<b;i++)
    printf("%d ");
    printf("\n");
}
void slowest_sort(int arr[],int no_of_element_in_the_array)
{
    int i,in_pos=0,k;
    for(i=0;i<no_of_element_in_the_array;i++)
    {
        k=1;
        if(arr[i]<arr[in_pos])
            {
                int j,temp=arr[i];
                for(j=i;j<no_of_element_in_the_array-1;j++)
                        arr[j+1]=arr[j];
                arr[in_pos-1]=temp;
                    in_pos=i;
            }
            else if(i==no_of_element_in_the_array-1)
            {
                in_pos++;
                i=0;
            }
//            display(arr,no_of_element_in_the_array);
    }
}
int main()
{
    int a[100]={45,40,80,12,10,50};
    slowest_sort(a,6);
    for(int i=0;i<6;i++)
        printf("%d\n",a[i]);
}


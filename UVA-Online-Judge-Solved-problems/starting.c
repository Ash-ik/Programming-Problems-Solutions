#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers u want to put:");
    scanf("%d",&n);
    int a[n],reverse[n];
    printf("Enter numbers:\n");
    for(int c=0;c<n;c++)
    {
        scanf("\n%d",&a[c]);
    }
    printf("After reversing:\n");
    for(int c=0;c<n;c++)

        reverse[c]=a[n-c-1];
    for(int c=0;c<n;c++)
        printf("%d\n",reverse[c]);

}

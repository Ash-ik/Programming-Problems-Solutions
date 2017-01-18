#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers u want to put:");
    scanf("%d",&n);
    int reverse[n];
    printf("Enter numbers:\n");
    for(int c=0;c<n;c++)
    {
        scanf("\n%d",&reverse[c]);
    }
    printf("\n");
    for(int c=n-1;c>=0;c--)
    printf("%d\n",reverse[c]);
}

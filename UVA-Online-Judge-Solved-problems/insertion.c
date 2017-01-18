#include<stdio.h>
int len;
void createArr(int a[])
{
    int i;
    printf("Enter %d element:",len);
    for(i=0;i<len;i++)
        scanf("%d",&a[i]);
}

void displayArr(int a[])
{
    int i;
    printf("Your desired array is= {");
    for(i=0;i<len;i++)
        printf(" %d",a[i]);
        printf(" }\n");
}

int search_pos(int a[],int val)
{
    int i;
    for(i=0;i<len;i++)
        if(a[i]==val)
        return i;
    return 0;
}
void insertArr(int a[])
{
    int choice,pos,i;
    while(printf("\n\n\t\tMAIN MENU\n\n\t\t1)Insert at begin\n\t\t2)Insert at end\n\t\t3)Insert before x\n\t\t4)Insert after x\n\t\t5)Exit.\n\nEnter your choice:") && scanf("%d",&choice)==1 && choice!=5)
    {
        int value;
        printf("Enter value that need to be inserted:");
        scanf("%d",&value);
        if(choice==1)
            pos=0;
        else if(choice==2)
            pos=len;
        else if(choice==3)
        {
            int x;
            printf("Enter x to insert before x:");
            scanf("%d",&x);
            pos=search_pos(a,x)-1;
        }
        else
        {
            int x;
            printf("Enter x to insert after x:");
            scanf("%d",&x);
            pos=search_pos(a,x)+1;
        }
        len=len+1;
        for(i=len-1;i>pos;i--)
            a[i]=a[i-1];
        a[pos]=value;
        displayArr(a);
        printf("\n");
    }

}
int main()
{
    printf("Enter number of element in the array:");
    scanf("%d",&len);
    int a[len];
    createArr(a);
    insertArr(a);
}

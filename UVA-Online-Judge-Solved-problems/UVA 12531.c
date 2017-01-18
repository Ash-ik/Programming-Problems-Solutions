#include<stdio.h>
int main()
{
    int t;
    while(fscanf(stdin,"%d",&t)!=EOF)
    printf("%c\n",t%6==0 ?'Y':'N');
    return 0;
}

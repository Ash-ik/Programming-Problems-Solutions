#include<stdio.h>
int main()
{
    int i=4,j=2;
    junk(&i,j);
    printf("%d ? %d\n",i,j);
}
int junk(int *i,int j)
{
    *i=*i * *i;
    j=j*j;
}

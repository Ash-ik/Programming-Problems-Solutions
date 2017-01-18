#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,ans,x,i,sqroot[100002];
    for(i=1;i<=100000;i++)
        sqroot[i]=sqrt(i);
    while(scanf("%d %d",&a,&b)==2)
        printf("%d\n",sqroot[b]-sqroot[a-1]);
    return 0;
}

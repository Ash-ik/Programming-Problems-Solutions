#include <stdio.h>
#include<string.h>
char NAND[111][9999];
int main()
{
    int n,i,t;
    sprintf(NAND[0],"((A0|B0)|(A0|B0))");
    for(i=1;i<=100;i++)
        sprintf(NAND[i],"((A%d|B%d)|(%s|((A%d|A%d)|(B%d|B%d))))",i,i,NAND[i-1],i,i,i,i);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%s\n",NAND[n-1]);
        if(t) printf("\n");
    }
    return 0;
}

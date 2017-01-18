#include<stdio.h>
int main()
{
    char a[15][150];
    int n[15],i,j=1,k,max;
    scanf("%d",&i);
    while(j<=i)
    {
        max=0;
        for(k=0;k<10;k++)
        {
            scanf("%s %d",a[k],&n[k]);
            if(n[k]>=max)
            max=n[k];
        }
        printf("Case #%d:\n",j);
        for(i=0;i<9;i++)
            if(n[i]==max)
        printf("%s\n",a[i]);
        j++;
    }
    return 0;
}

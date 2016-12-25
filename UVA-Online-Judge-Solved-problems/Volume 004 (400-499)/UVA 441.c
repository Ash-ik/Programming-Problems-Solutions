#include<stdio.h>
#include<stdbool.h>
int main()
{

    int num;
    bool newLine=false;
    while(scanf("%d",&num)==1 &&num)
    {
        int i,j,k,l,m,n,a[15];
        for(i=0;i<num;i++)
            scanf("%d",&a[i]);
        if(newLine)
            printf("\n");
    newLine=true;

            for(i=0;i<num;i++)
                for(j=i+1;j<num;j++)
                    for(k=j+1;k<num;k++)
                        for(l=k+1;l<num;l++)
                    for(m=l+1;m<num;m++)
                for(n=m+1;n<num;n++)
                printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m],a[n]);
    }
    return 0;
}

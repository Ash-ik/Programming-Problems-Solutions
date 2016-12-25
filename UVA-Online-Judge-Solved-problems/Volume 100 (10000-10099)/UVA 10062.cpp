#include<stdio.h>
#include<string.h>
int main()
{
    char a[1010];
    int z=0;
    while(gets(a))
    {
        if(z)
            printf("\n");
        z=1;
        int max=0,ltr[130]={},i,j;
        for(i=0;a[i];i++)
            if(++ltr[a[i]]>max)
                max=ltr[a[i]];
        for(j=1;j<=max;j++)
            for(i=127;i>=32;i--)
                if(ltr[i]==j)
                    printf("%d %d\n",i,j);
    }
    return 0;
}

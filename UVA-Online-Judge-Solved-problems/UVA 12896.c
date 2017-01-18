#include<stdio.h>
#include<string.h>
int main()
{
    char ans[15][10]={"     "," .,?\""," abc"," def"," ghi"," jkl"," mno"," pqrs"," tuv"," wxyz"};
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            for(i=0;i<n;i++)
            {
                int b;
                scanf("%d",&b);
                if(a[i]==0 &&b>1)
                {
                    while(b--)
                        printf(" ");
                }
                else
                printf("%c",ans[a[i]][b]);
            }
            printf("\n");
    }
    }

    return 0;
}

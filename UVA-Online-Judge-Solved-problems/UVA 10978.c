#include<stdio.h>
#include<string.h>

int main()
{
    int n,len;
    char x[30],y[30];
    while (scanf("%d", &n) && n)
    {
        char ans[99][99]={};
        int pos=-1,i;
        for (i=0;i<n;i++)
        {
            scanf("%s %s",x,y);
            len=strlen(y);
            while(len--)
            {
                pos=(pos+1)%n;
                while(ans[pos][0])
                    pos=(pos+1)%n;
            }
            strcpy(ans[pos],x);
        }
        printf("%s",ans[0]);
        for (i=1;i<n;i++)
            printf(" %s", ans[i]);
            puts("");
    }
    return 0;
}

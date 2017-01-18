#include<stdio.h>
int main()
{
    char ans[5]={'A','B','C','D','E'};
    int t,i,x,pos,a;
    while(scanf("%d",&t) &&t!=0)
    {
        while(t--)
        {
            x=0;
            for(i=0;i<5;i++)
            {
                scanf("%d",&a);
                if(a<=127) {x++;pos=i;}
            }
            if(x>1||x==0) printf("*\n");
            else printf("%c\n",ans[pos]);
        }
    }
    return 0;
}

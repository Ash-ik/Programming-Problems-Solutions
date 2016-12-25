#include<stdio.h>
int main()
{
    char a,p[10000];
    int row,clm,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(p);
        sscanf(p,"%c %d %d",&a,&row,&clm);
        if(a=='r'||a=='Q')
        printf("%d\n",row<clm?row:clm);
        else if(a=='k')
        printf("%d\n",(row*clm)/2);
        else
        printf("%d\n",((row+1)/2)*((clm+1)/2));
    }
    return 0;
}

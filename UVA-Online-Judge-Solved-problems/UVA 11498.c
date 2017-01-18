#include<stdio.h>
int main()
{
    int t,m,n,r,c;
    while(scanf("%d",&t)==1 &&t)
    {
        scanf("%d %d",&m,&n);
        while(t--)
        {
            scanf("%d %d",&r,&c);
            if(r==m ||c==n)
            puts("divisa");
            else if(r>m)
            {
                if(c>n) puts("NE");
                else if(c<n) puts("SE");
            }
            else if(r<m)
            {
                if(c>n) puts("NO");
                else if(c<n) puts("SO");
            }
        }
    }
    return 0;
}

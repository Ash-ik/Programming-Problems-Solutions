#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,t,o,n;
    char a[100][1000],ch,b[100][1000],c[1000];
    scanf("%d",&t);
    ch=getchar();
    while(i<t)
        {
            gets(a[i]);
            gets(b[i]);
            i++;
        }
        scanf("%d",&n);
        getchar();
        while(n--)
        {
            o=0;
            gets(c);
            while(o<t)
            {
                if(!strcmp(a[o],c))
                    {printf("%s\n",b[o]);break;}
                    o++;
            }
        }
        return 0;
}

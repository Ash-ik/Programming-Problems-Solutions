#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,t,o,n,x,y,flag,p=0;
    char a[100][1000],ch,b[100][1000],c[1000];
    while(scanf("%s %s",a[i],b[i])==2 &&a[i][0]!=' ' &&b[i][0]!=' ' &&++i);
        for(y=0;y<i;y++)
        printf("%s %s\n",a[y],b[y]);
        while(gets(c))
        {printf("%s\n",c);
            for(y=0;y<i;y++)
        {
            if(!strcmp(c,b[y]))
            {flag=0;printf("%s\n",a[y]);break;}
            else flag=1;
        }
        if(flag)printf("eh\n");
        }
        return 0;
}

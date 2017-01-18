#include<stdio.h>
#include<string.h>
int main()
{
    int e,i,p,flag,j,x,d;
    char a[100000],c[10000];
    while(gets(a) &&strcmp(a,"DONE"))
    {
        d=1;
        p=strlen(a);
        for(i=0,x=0;i<p;i++)
        {
            if(a[i]>='a' &&a[i]<='z') {c[x]=a[i];x++;}
            else if(a[i]>='A' &&a[i]<='Z') {c[x]=a[i]+32;x++;}
        }
        c[x]='\0';
        e=strlen(c);
        for(i=0;i<e/2;++i)
            {
               if (c[i]!=c[e-i-1])
               {
                    printf("Uh oh..\n");
                    d=0;
                    break;
               }
               }
        if(d)
        printf("You won't be eaten!\n");
    }
    return 0;
}

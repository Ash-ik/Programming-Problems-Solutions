#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b,c;
    int p,q,ans,sp,st;
    while(gets(a) && strcmp(a,"*"))
    {
        sp=0;
        ans=0;
        b=a[0];
        if(b>=65 && b<=90)
        c=b+32;
        else c=b-32;
        st=strlen(a);
        if(a[st-1]==' ')
        a[st-1]='\0';
        for(p=0;a[p]!='\0';p++)
        {
            if(a[p]==' ')
            {
                sp++;
                if(a[p+1]==b ||a[p+1]==c)
                ans++;
            }
        }
        if(sp==ans)
        printf("Y\n");
        else printf("N\n");
    }
    return 0;
}

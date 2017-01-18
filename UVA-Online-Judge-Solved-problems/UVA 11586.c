#include<stdio.h>
#include<string.h>
int main()
{
    int t,p,i,sp,ans,m,f;
    char a[1000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        sp=0,ans=0,m=0,f=0;
        gets(a);
        p=strlen(a);
        for(i=0;i<p;i++)
        {
            switch(a[i])
            {
                case 'M':m++;break;
                case 'F':f++;break;
                case ' ':sp++;break;
            }
        }
        if(m==f &&sp)
        printf("LOOP\n");
        else printf("NO LOOP\n");
    }
    return 0;
}

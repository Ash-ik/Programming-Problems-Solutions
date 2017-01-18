#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[260];
int ltr[130];
int main()
{
    int max,t,i;
    scanf("%d",&t);
    getchar();
    while(t--)
        {
            for(i='a';i<='z';i++)
                ltr[i]=0;
        max=0;
        gets(a);
        for(i=0;a[i];i++)
        if((a[i]>='A'&& a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(a[i]>='A'&& a[i]<='Z')
                    a[i]+=32;
                if(++ltr[a[i]]>max)
                    max=ltr[a[i]];
            }
        for(i='a';i<='z';i++)
            if(ltr[i]==max)
                printf("%c",i);
        printf("\n");
    }
    return 0;
}

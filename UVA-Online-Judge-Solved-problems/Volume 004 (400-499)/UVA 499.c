#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[26000];
int main()
{
    freopen("dataN.txt","r",stdin);
    int max,t,i;
    while(gets(a))
        {
            int ltr[130]={};
            max=0;
        for(i=0;a[i];i++)
        if((a[i]>='A'&& a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(++ltr[a[i]]>max)
                    max=ltr[a[i]];
            }
        for(i='A';i<='z';i++)
            if(ltr[i]==max)
                printf("%c",i);
                printf(" %d\n",max);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
bool valid(char a)
{
    if((a>='A' && a<='Z')||(a>='a'&&a<='z')||a=='-')
            return true;
    return false;
}

    char t[100000],x[100000];
int main()
{
    int n,len,max=0,i;
    while(scanf("%s",&t)==1 && strcmp(t,"E-N-D"))
    {
        len=0;
        for(i=0;i<strlen(t);i++)
        {
                if(valid(t[i]))
                len++;
        }
            if(len>max)
               {
                    max=len;
                    strcpy(x,t);
               }
    }
for(i=0;i<strlen(x);i++)
        if(valid(x[i]))
    printf("%c",tolower(x[i]));
    printf("\n");
    return 0;
}

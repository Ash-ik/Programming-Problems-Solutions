#include <stdio.h>
#include<string.h>
int main()
{
    int p,sum=0,i;
    char a[150];
    while(gets(a))
    {
        p=strlen(a);
            for(i=0;i<p;i++)
            {
                if(a[i]>='0' &&a[i]<='9')
                    sum+=a[i]-'0';
                    else if(a[i]=='!')
                        printf("\n");
                else
                {
                    int x;
                    char c;
                    if(a[i]=='b')
                        c=' ';
                    else c=a[i];
                    for(x=0;x<sum;x++)
                        printf("%c",c);
                    sum=0;
                }
        }
        printf("\n");
    }
    return 0;
}


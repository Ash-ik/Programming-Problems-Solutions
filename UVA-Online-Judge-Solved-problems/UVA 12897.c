#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i;
    char input[1000005],s[10];
    gets(s);
    t=atoi(s);
    while(t--)
    {
        gets(input);
        gets(s);
        n=atoi(s);
        char a[128];
        for(i='A';i<='Z';i++)
            a[i]=i;
            a['_']='_';
        while(n--)
        {
            gets(s);
            for(i='A';i<='Z';i++)
                if(a[i]==s[2])
                a[i]=s[0];
        }
        for(i=0;input[i];i++)
            putchar(a[input[i]]);
        putchar('\n');
    }
    return 0;
}

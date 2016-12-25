#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isvowel(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
        return true;
    return false;
}
int main()
{
    int d=0;
    char a[100000];
    while(scanf("%s",a)==1)
    {
        if(d)
        printf(" ");
        if(isvowel(a[0]))
            printf("%say",a);
        else
        {
            int p;
            for(p=1;a[p];p++)
            printf("%c",a[p]);
            printf("%cay",a[0]);
        }
        d++;
    }
    printf("\n");
    return 0;
}

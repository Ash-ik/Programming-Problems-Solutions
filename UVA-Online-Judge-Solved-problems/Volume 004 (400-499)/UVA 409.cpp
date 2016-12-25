#include<stdio.h>
#include<stdbool.h>
#include<string.h>
char a[100000];
bool vowel(char *x)
{
    if(x=='a' ||x=='e' ||x=='i'||x=='o'||x=='u'||x=='A'||x='E'||x='I'||x=='O'||x=='u')
        return true;
    return false;
}
int main()
{
    while(scanf("%s",a)!=EOF)
    {
        if(vowel(a[0]))
        printf("%say\n",a);
        else printf(1,"%s%cay\n",a,a[0]);
    }
    return 0;
}

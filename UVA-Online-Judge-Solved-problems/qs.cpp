#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<array>
char sort(char*,char*);
int main()
{
    int n;
    char a[1000];
    gets(a);
    n=strlen(a);
    sort(a,a+1000);
    printf("%s\n",a);
}

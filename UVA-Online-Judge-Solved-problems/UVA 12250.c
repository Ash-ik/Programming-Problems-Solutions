#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char a[50];
    while(scanf("%s",a) && strcmp(a,"#"))
    {
        if(!strcmp(a,"HELLO")) printf("Case %d: ENGLISH\n",++i);
        else if(!strcmp(a,"HOLA")) printf("Case %d: SPANISH\n",++i);
        else if(!strcmp(a,"HALLO")) printf("Case %d: GERMAN\n",++i);
        else if(!strcmp(a,"BONJOUR")) printf("Case %d: FRENCH\n",++i);
        else if(!strcmp(a,"CIAO")) printf("Case %d: ITALIAN\n",++i);
        else if(!strcmp(a,"ZDRAVSTVUJTE")) printf("Case %d: RUSSIAN\n",++i);
        else  printf("Case %d: UNKNOWN\n",++i);
    }
    return 0;
}

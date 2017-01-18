#include<stdio.h>
#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
    char b[100];
    map<char,int>a;
    map<char,int> ::iterator pt;
    scanf("%s",b);
    for(int i=0;i<strlen(b);i++)
    {
        a[b[i]]++;
    }
    for(pt=a.begin();pt!=a.end();pt++)
        printf("%c %d\n",(*pt).first,(*pt).second);
}

#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int type,counts,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d %d",name,&type,&counts);
        if(type==1 || counts>=30)
            puts(name);
    }
    return 0;
}

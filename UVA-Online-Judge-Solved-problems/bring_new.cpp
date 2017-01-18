#include<stdio.h>
#include<string.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i;
    char a[100],c;
    string temp="";
    while(scanf("%c",&c) &&c!='\n')
    {
        c=tolower(c);
       if(c=='k'||c=='u'||c=='e'||c=='t')
           temp+=c;
           else temp="";
           if(temp=="kuet")
           {
               system("cls");
               Sleep(500);
               printf("\n\n\n\n\n\n\n\n\t\tWELCOME TO THE BASHBAGAN :/");
               break;
           }
    }
    return 0;
}


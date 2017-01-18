#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include<sstream>
using namespace std;

void break_strings(string s) {
    string p;
    int cnt=0;
    istringstream sin(s);
    while(sin>>p)
        {
            if(p.length()>cnt)
            printf("%c",p.at(cnt++));
        }
        printf("\n");
}

int main()
{
    string s="";
    int i=1,t;
    scanf("%d\n",&t);
    while(i<=t)
    {
        if(s.length()==0)
        printf("Case #%d:\n",i);
        while(getline(cin,s) && s.length())
            break_strings(s);

        if(t-i) printf("\n");
         i++;
    }
    return 0;
}

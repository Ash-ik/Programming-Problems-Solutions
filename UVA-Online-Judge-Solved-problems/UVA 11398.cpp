#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
string ans="";
char s[10000],flag;
int main()
{
    int i,j,p,sum;
    while(scanf("%s",s)==1 &&strcmp(s,"~"))
    {
        p=strlen(s);
        if(p==1) flag='1';
        if(p==2) flag='0';
        else
            for(i=0;i<p-2;i++)
            ans+=flag;
        if(!strcmp(s,"#"))
        {
            j=0,sum=0;
            for(i=ans.length()-1;i>=0;i--)
                    sum+=(ans.at(i)-'0')*(1<<j++);
                printf("%d\n",sum);
                ans="";
        }
    }
    return 0;
}

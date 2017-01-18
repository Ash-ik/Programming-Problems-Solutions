#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<stdbool.h>
using namespace std;
bool valid(char a)
{
    if((a>='A' && a<='Z')||(a>='a'&&a<='z')||a=='-')
            return true;
    return false;
}
string ans,temp;
    char t[10000],x[10000];
int main()
{
    freopen("dataN.txt","r",stdin);
    int n,len,max=0,i;
    while(scanf("%s",&t)==1 && strcmp(t,"E-N-D"))
    {
        len=0;
        for(i=0;i<strlen(t);i++)
        {
                if(valid(t[i]))
                len++;
        }
            if(len>max)
               {
                    max=len;
                    ans=t;
                    strcpy(x,t);
               }
    }
for(i=0;i<strlen(x);i++)
        if(valid(x[i]))
    printf("%c",tolower(x[i]));
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int a,t,c,cs=1;
    char b[1000];
    scanf("%d",&t);
    while(cs<=t)
    {
        scanf("%d%s",&a,b);
        c=strlen(b)>3? (int) b[3]-'0' :0;
        cout<<"Case "<<cs++<<": "<<a*0.5+c*0.05<<endl;
    }
    return 0;
}
